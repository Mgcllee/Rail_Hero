using Google.Protobuf;
using System;
using System.Diagnostics;
using System.IO;
using System.Net;
using System.Net.Sockets;
using System.Threading.Tasks;
using User;

namespace RHTFMainServer
{
    public class ServerSettings
    {
        private int main_server_port;

        IPEndPoint serverAddress;
        TcpListener server;

        static TcpClient accepter_client;

        static TcpClient test_client;

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
                // Main Thread 종료 방지용
            }
        }

        async void worker_thread()
        {
            await Task.Run(async () =>
            {
                Console.WriteLine("Accept waiting...");
                accepter_client = server.AcceptTcpClient();
                Console.WriteLine("Accept sucess!!!");

                test_client = accepter_client;
                NetworkStream stream = test_client.GetStream();

                byte[] data = new byte[test_client.ReceiveBufferSize];
                System.Array.Clear(data, 0, data.Length);
                int bytesRead = stream.Read(data, 0, data.Length);

                PacketType message;
                using (MemoryStream ms = new MemoryStream(data, 0, bytesRead))
                {
                    message = PacketType.Parser.ParseFrom(ms);
                }

                switch (message.TypeOneofCase)
                {
                    case PacketType.TypeOneofOneofCase.C2SLoginUserReq:
                        {
                            Console.WriteLine
                            (
                                "[Login Info]\nUserID: "
                                + message.C2SLoginUserReq.UserID
                            );

                            PacketType packet = new PacketType();
                            packet.S2CLoginUserRes = new S2CPCLoginUserRes()
                            {
                                UserID = 4,
                                UserLevel = 4,
                                UserName = "Mgcllee"
                            };

                            byte[] send_data = packet.ToByteArray();
                            stream.Write(send_data, 0, send_data.Length);

                            ReqInfo.ReqInfoClient req;
                            
                        }
                        break;
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
