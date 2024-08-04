using Google.Protobuf;
using System;
using System.IO;
using System.Runtime.InteropServices.ComTypes;
using User;

namespace RHTFMainServer
{
    class ProcessPacketS2C
    {
        public void process_packet_s2c(Stream stream, PacketType message)
        {
            switch (message.TypeOneofCase)
            {
                case PacketType.TypeOneofOneofCase.S2CLoginUserRes:
                    {
                        /*PacketType packet = new PacketType();
                        packet.S2CLoginUserRes = new S2CPCLoginUserRes()
                        {
                            UserID = 4,
                            UserLevel = 4,
                            UserName = "Mgcllee"
                        };*/

                        byte[] send_data = message.ToByteArray();
                        stream.Write(send_data, 0, send_data.Length);
                    }
                    break;
            }
        }
    }
}
