using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;
using User;

namespace RHTFMainServer
{
    public static class ServerVariable
    {
        public static int main_server_port;

        public static IPEndPoint serverAddress;
        public static TcpListener server;

        internal static ConcurrentDictionary<int, TcpClient> Clients
            = new ConcurrentDictionary<int, TcpClient>();

        internal static ConcurrentQueue<(int, (TYPE, PacketType))> job_queue
            = new ConcurrentQueue<(int, (TYPE, PacketType))>();
    }
}
