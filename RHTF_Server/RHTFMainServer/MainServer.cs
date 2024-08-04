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
        private int main_server_port;

        IPEndPoint serverAddress;
        TcpListener server;

        TcpClient accepter_client;

        TcpClient test_client;

        object lock_obj = new object();
        ConcurrentDictionary<int, TcpClient> Clients = new ConcurrentDictionary<int, TcpClient>();
        ConcurrentQueue<(int, TYPE)> job_queue = new ConcurrentQueue<(int, TYPE)>();

        int c_uid = 0;

        public ServerSettings() { }
        public ServerSettings(int port)
        {
            main_server_port = port;
        }

        public void OnMainServer()
        {
            serverAddress = new IPEndPoint(IPAddress.Any, main_server_port);
            server = new TcpListener(serverAddress);
            
            server.Start();

            worker_thread();
            while (true)
            {
                Console.WriteLine("Accept waiting...");
                accepter_client = server.AcceptTcpClient();

                try
                {
                    lock(lock_obj)
                    {
                        c_uid += 1;
                        
                        test_client = accepter_client;

                        Clients.TryAdd(c_uid, test_client);
                    }

                    // accepter_client.Close();
                    Console.WriteLine("New Client enter");
                    job_queue.Enqueue((c_uid, TYPE.RECV));
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
                        (int, TYPE) job;
                        job_queue.TryDequeue(out job);
                        
                        if (job.Item1.CompareTo(c_uid) > 0 || job.Item1 == 0)
                            continue;

                        // process each packet type
                        switch(job.Item2)
                        {
                            case TYPE.ACCEPT:
                                {

                                }
                                break;
                            case TYPE.RECV:
                                {
                                    Console.WriteLine("Recv new packet");
                                    NetworkStream stream = Clients[job.Item1].GetStream();

                                    byte[] data = new byte[Clients[job.Item1].ReceiveBufferSize];
                                    System.Array.Clear(data, 0, data.Length);
                                    int bytesRead = stream.Read(data, 0, data.Length);

                                    ppc2s.process_packet_c2s(data, bytesRead);

                                }
                                break;
                            case TYPE.SEND:
                                {
                                    NetworkStream stream = Clients[job.Item1].GetStream();

                                    // pps2c.process_packet_s2c(stream, );
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
