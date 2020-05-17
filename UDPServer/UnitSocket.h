#pragma once

// UnitSocket 명령 대상

class UnitSocket : public CAsyncSocket
{
public:
	UnitSocket();
	virtual ~UnitSocket();
	virtual void OnClose(int nErrorCode);
	virtual void OnReceive(int nErrorCode);
	virtual void OnSend(int nErrorCode);

	void SendNumber(int);
};


