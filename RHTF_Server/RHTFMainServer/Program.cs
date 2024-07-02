using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;
using System.IO;
using static System.Net.Mime.MediaTypeNames;
using System.Net;
using System.Net.Sockets;
using System.Runtime.InteropServices.ComTypes;
using Google.Protobuf;
using System.CodeDom.Compiler;
using Google.Protobuf.Compiler;
using Google.Protobuf.WellKnownTypes;

namespace RHTFMainServer
{
    class Pack
    {
        public int size;
        public string buf;
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            string exe_name = "C:\\Git\\RHTF\\RHTF_Server\\x64\\Release\\RHTFStageServer.exe";
            
            // 현재, 명령어의 띄어쓰기는 제거됨
            // Process.Start(exe_name, "C#에서 보내는 명령어 모음\nUID: Mgcllee, leemc\nnewAddr:127.0.0.1:7777");
            
            IPEndPoint serverAddress = new IPEndPoint(IPAddress.Parse("127.0.0.1"), 7777);
            TcpListener server = new TcpListener(serverAddress);
            server.Start();

            Console.WriteLine("[C# Main Server]");

            while (true)
            {
                TcpClient client = server.AcceptTcpClient();

                Console.WriteLine("새로운 클라이언트 접속");
                Console.WriteLine("메시지 수신");

                NetworkStream stream = client.GetStream();
                
                byte[] data = new byte[client.ReceiveBufferSize];
                int bytesRead = stream.Read(data, 0, data.Length);

                C2SPCLoginUserReq message;
                using (MemoryStream ms = new MemoryStream(data, 0, bytesRead))
                {
                    message = C2SPCLoginUserReq.Parser.ParseFrom(ms);
                }

                Console.WriteLine("[Login Info]\nUserID: " + message.UserID);
                Console.ReadLine();

                // Send Packet
                S2CPCLoginUserRes s2CPCLoginUserRes = new S2CPCLoginUserRes()
                {
                    UserID = message.UserID,
                    UserName = "message",
                    UserLevel = 10
                };

                byte[] send_data = s2CPCLoginUserRes.ToByteArray();
                stream.Write(send_data, 0, send_data.Length);

                Console.WriteLine("[End C# Program]");

                Console.ReadLine();
            }
            
            // Continue;
        }
    }
}
