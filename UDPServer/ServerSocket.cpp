// ServerSocket.cpp: 구현 파일
//

#include "pch.h"
#include "UDPServer.h"
#include "ServerSocket.h"


// ServerSocket

ServerSocket::ServerSocket()
{
}

ServerSocket::~ServerSocket()
{
}


// ServerSocket 멤버 함수


void ServerSocket::OnAccept(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	CAsyncSocket::OnAccept(nErrorCode);
}
