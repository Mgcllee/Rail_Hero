# RH Server

각 사용자의 정보와 게임 매칭을 담당하는 서버를 Main Server  
특정 인원이 모여 함께 진행하는 서버를 Stage Server    

<br/>

![그림1](https://github.com/Mgcllee/RHTF/assets/73012050/185fac8e-ff83-459d-af59-f4135fb1ae22)

<br/>

# Main Server

C#을 사용  

[[Mgcllee.github.io] C#에서 외부 실행파일 실행하기](https://mgcllee.github.io/posts/Diagnostics/)

# Stage Server
C++20 과 Boost 를 사용.  
단, Boost의 경우 github에 올리기에는 파일이 너무 많음.  
따라서 RHTF_Server.sln (솔루션 파일)과 동일한 위치에  
로컬에서 배치할 것.

# ProtoBuf
protoc version: [v25.3](https://github.com/protocolbuffers/protobuf/releases/tag/v25.3)  
> UE5와 verify() 함수 중복 문제로 23.3 버전으로 변경 필요.
> > C#, C++ 프로젝트도 .3 버전으로 변경 필요

C++ project protobuf version: vcpkg protobuf:x64-windows 4.25.1  
C# Nuget Google.Protobuf version: [3.25.3](https://www.nuget.org/packages/Google.Protobuf/3.25.3?_src=template)  
C# Nuget protobuf-net version: [3.2.30](https://www.nuget.org/packages/protobuf-net/3.2.30?_src=template)  
C# Nuget protobuf-net.Core version: [3.2.30](https://www.nuget.org/packages/protobuf-net.Core/3.2.30?_src=template)  

[버전 확인 필수](https://protobuf.dev/support/version-support/)  

> ProtoBuf 컴파일러인 **protoc**의 추출물은 절대 수정 금지.
