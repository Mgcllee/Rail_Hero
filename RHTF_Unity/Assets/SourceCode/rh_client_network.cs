using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Google.Protobuf;
using User;
using System.Net.Sockets;
using System;
using System.IO;

public class rh_network_ : MonoBehaviour
{
    private TcpClient client;

    // Start is called before the first frame update
    void Start()
    {
        connect_to_server("127.0.0.1", 7777);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    bool connect_to_server(string server_addr, int server_port)
    {
        try
        {
            client = new TcpClient(server_addr, server_port);
        }
        catch (Exception e)
        {
            Debug.Log("On client connect exception " + e);
            return false;
        }

        C2SPCLoginUserReq login_pack = new C2SPCLoginUserReq()
        {
            UserID = "Unity Client 9785"
        };

        NetworkStream stream = client.GetStream();

        byte[] send_data = login_pack.ToByteArray();
        stream.Write(send_data, 0, send_data.Length);
        stream.Close();

        return true;
    }
}
