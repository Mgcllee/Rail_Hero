using Google.Protobuf;
using System;
using System.IO;
using User;

namespace RHTFMainServer
{
    class ProcessPacketC2S
    {
        public void process_packet_c2s(byte[] data, int bytesRead)
        {
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
                    }
                    break;
            }
        }
    }
}
