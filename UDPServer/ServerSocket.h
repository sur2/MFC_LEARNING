#pragma once

#include "UnitSocket.h"

// ServerSocket 명령 대상

class ServerSocket : public CAsyncSocket
{
private :
	UnitSocket unit;
public:
	ServerSocket();
	virtual ~ServerSocket();
	virtual void OnAccept(int nErrorCode);
};


