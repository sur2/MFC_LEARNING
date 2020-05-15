#pragma once

// ServerSocket 명령 대상

class ServerSocket : public CAsyncSocket
{
public:
	ServerSocket();
	virtual ~ServerSocket();
	virtual void OnAccept(int nErrorCode);
};


