# Rail Hero  

데이터 직렬화를 이해하고  
Protobuf 를 사용해 보고자 제작된 프로젝트입니다.  

# Client
Mobile: Unity 2022.3.32f1  
PC: Unreal Engine 5.3.2

# Server

* Main Server (C#)  
* Stage Server (C++)  

<br/>

![그림1](https://github.com/Mgcllee/RHTF/assets/73012050/185fac8e-ff83-459d-af59-f4135fb1ae22)

<br/>

# ProtoBuf
protoc version: [v25.1](https://github.com/protocolbuffers/protobuf/releases/tag/v25.3)  

<br/>

C++ project protobuf version: vcpkg protobuf:x64-windows 4.25.1  
C++ project gRPC version: vcpkg grpc:x64-windows 1.60.0  

<br/>

C# Nuget Google.Protobuf version: [3.25.1](https://www.nuget.org/packages/Google.Protobuf/3.23.3?_src=template)  
C# Nuget Grpc.Core.Api version: [2.65.0](https://www.nuget.org/packages/Grpc.Core.Api/2.65.0?_src=template)  
C# Nuget Grpc.Net.Common version: [2.65.0](https://www.nuget.org/packages/Grpc.Net.Common/2.65.0?_src=template)  
C# Nuget Grpc.Tools version: [2.65.0](https://www.nuget.org/packages/Grpc.Tools/2.65.0?_src=template)  

Unreal Engine 5.3.2 Protobuf version : C++ protobuf:x64-windows 4.25.1 (vcpkg version)  
Unity Protobuf version : C# Nuget Google.Protobuf 3.25.1 + @  

현재 버전: (protoc 기준)**25.1**  
[버전 확인 필수](https://protobuf.dev/support/version-support/)  

> ProtoBuf 컴파일러인 **protoc**의 추출물은 절대 수정 금지.
