// UnitSocket.cpp: 구현 파일
//

#include "pch.h"
#include "UDPServer.h"
#include "UnitSocket.h"


// UnitSocket

UnitSocket::UnitSocket()
{
}

UnitSocket::~UnitSocket()
{
}


// UnitSocket 멤버 함수


void UnitSocket::OnClose(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	ShutDown(2);
	Close();
	CAsyncSocket::OnClose(nErrorCode);
}


void UnitSocket::OnReceive(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	int value;
	Receive(&value, sizeof(int));

	AfxGetMainWnd()->SetDlgItemInt(IDC_VALUE_EDIT, value);
	/*
	int temp;
	temp = AfxGetMainWnd()->GetDlgItemInt(IDC_VALUE_EDIT);
	Send(&temp, sizeof(int));
	*/
	CAsyncSocket::OnReceive(nErrorCode);
}

void UnitSocket::SendNumber(int num) {
	Send(&num, sizeof(int));
}

void UnitSocket::OnSend(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	CAsyncSocket::OnSend(nErrorCode);
}
