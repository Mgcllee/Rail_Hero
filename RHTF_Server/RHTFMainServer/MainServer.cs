using Google.Protobuf;
using System;
using System.Diagnostics;
using System.IO;
using System.Net;
using System.Net.Sockets;
using System.Threading.Tasks;
using User;
using System.Collections;
using System.Collections.Concurrent;
using System.Runtime.InteropServices;

namespace RHTFMainServer
{
    enum TYPE
    {
        ACCEPT = 1,
        RECV = 2,
        SEND = 3
    };

    public class ServerSettings
    {
        private object lock_obj = new object();
        private int c_uid = 0;

        public ServerSettings() { }
        public ServerSettings(int port)
        {
            ServerVariable.main_server_port = port;
        }

        public void OnMainServer()
        {
            ServerVariable.serverAddress = new IPEndPoint(IPAddress.Any, ServerVariable.main_server_port);
            ServerVariable.server = new TcpListener(ServerVariable.serverAddress);

            ServerVariable.server.Start();

            worker_thread();
            while (true)
            {
                Console.WriteLine("Accept waiting...");
                TcpClient accepter_client = new TcpClient();
                accepter_client = ServerVariable.server.AcceptTcpClient();

                try
                {
                    Console.WriteLine("New Client enter");
                    lock (lock_obj)
                    {
                        c_uid += 1;

                        // Concurrent but "c_uid += 1"
                        ServerVariable.Clients.TryAdd(c_uid, accepter_client);
                        ServerVariable.job_queue.Enqueue((c_uid, (TYPE.RECV, new PacketType())));
                    }
                }
                catch 
                { 
                    
                }
            }
        }

        async void worker_thread()
        {
            ProcessPacketC2S ppc2s = new ProcessPacketC2S();
            ProcessPacketS2C pps2c = new ProcessPacketS2C();

            await Task.Run(async () =>
            {
                while (true)
                {
                    try
                    {
                        if (ServerVariable.job_queue.Count == 0)
                            continue;
                        (int, (TYPE, PacketType)) job;
                        ServerVariable.job_queue.TryDequeue(out job);
                        
                        if (job.Item1.CompareTo(c_uid) > 0 || job.Item1 == 0)
                            continue;

                        // process each packet type
                        switch(job.Item2.Item1)
                        {
                            case TYPE.ACCEPT:
                                {

                                }
                                break;
                            case TYPE.RECV:
                                {
                                    Console.WriteLine("Recv new packet uid: " + job.Item1);
                                    NetworkStream stream = ServerVariable.Clients[job.Item1].GetStream();

                                    byte[] data = new byte[ServerVariable.Clients[job.Item1].ReceiveBufferSize];
                                    Array.Clear(data, 0, data.Length);
                                    int bytesRead = stream.Read(data, 0, data.Length);

                                    ppc2s.process_packet_c2s(c_uid, data, bytesRead);

                                }
                                break;
                            case TYPE.SEND:
                                {
                                    NetworkStream stream = ServerVariable.Clients[job.Item1].GetStream();

                                    pps2c.process_packet_s2c(stream, job.Item2.Item2);
                                }
                                break;
                        }
                    }
                    catch { }
                        
                }
            });
        }
    }

    public class Stage_Server
    {
        void OnStageServer()
        {
            // Stage Server 실행 
            string exe_name = "C:\\Git\\RHTF\\RHTF_Server\\x64\\Release\\RHTFStageServer.exe";
            string stage_server_addr = "127.0.0.1";
            int stage_server_port = 7777;

            ProcessStartInfo startInfo = new ProcessStartInfo(exe_name);
            startInfo.WindowStyle = ProcessWindowStyle.Minimized;
            startInfo.Arguments = stage_server_addr + " " + stage_server_port.ToString() + " " + "UID Mgcllee leemc";
            Process.Start(startInfo);
        }
    }

    internal class MainServer
    {
        static void Main(string[] args)
        {
            ServerSettings settings = new ServerSettings(7777);
            settings.OnMainServer();
        }
    }
}
