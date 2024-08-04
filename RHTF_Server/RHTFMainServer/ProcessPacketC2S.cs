using Google.Protobuf;
using System;
using System.IO;
using User;

namespace RHTFMainServer
{
    class ProcessPacketC2S
    {
        public void process_packet_c2s(int c_uid, byte[] data, int bytesRead)
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

                        PacketType packet = new PacketType();
                        packet.S2CLoginUserRes = new S2CPCLoginUserRes()
                        {
                            UserID = 4,
                            UserLevel = 4,
                            UserName = "Mgcllee"
                        };
                        ServerVariable.job_queue.Enqueue((c_uid, (TYPE.SEND, packet)));
                    }
                    break;
            }
        }
    }
}
