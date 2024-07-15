using Google.Protobuf;
using System;
using System.Diagnostics;
using System.IO;
using System.Net;
using System.Net.Sockets;

namespace RHTFMainServer
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Stage Server 실행 
            string exe_name = "C:\\Git\\RHTF\\RHTF_Server\\x64\\Release\\RHTFStageServer.exe";
            string stage_server_addr = "127.0.0.1";
            int stage_server_port = 7777;

            ProcessStartInfo startInfo = new ProcessStartInfo(exe_name);
            startInfo.WindowStyle = ProcessWindowStyle.Minimized;
            startInfo.Arguments = stage_server_addr + " " + stage_server_port.ToString() + " " + "UID Mgcllee leemc";
            Process.Start(startInfo);

            // Server
            IPEndPoint serverAddress = new IPEndPoint(IPAddress.Parse(stage_server_addr), stage_server_port);
            TcpListener server = new TcpListener(serverAddress);
            server.Start();

            // accept new client
            TcpClient client = server.AcceptTcpClient();

            // new client network stream
            NetworkStream stream = client.GetStream();
            
            // recv client send packet
            byte[] data = new byte[client.ReceiveBufferSize];
            int bytesRead = stream.Read(data, 0, data.Length);

            C2SPCLoginUserReq message;
            using (MemoryStream ms = new MemoryStream(data, 0, bytesRead))
            {
                message = C2SPCLoginUserReq.Parser.ParseFrom(ms);
            }

            // checking recv packet information
            Console.WriteLine("[Login Info]\nUserID: " + message.UserID);
            

            // send Packet
            S2CPCLoginUserRes s2CPCLoginUserRes = new S2CPCLoginUserRes()
            {
                UserID = message.UserID,
                UserName = "message",
                UserLevel = 10
            };

            byte[] send_data = s2CPCLoginUserRes.ToByteArray();
            stream.Write(send_data, 0, send_data.Length);

            // disconnect client stream
            stream.Close();
        }
    }
}
