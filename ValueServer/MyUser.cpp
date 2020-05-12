// MyUser.cpp: 구현 파일
//

#include "pch.h"
#include "ValueServer.h"
#include "MyUser.h"


// MyUser

MyUser::MyUser()
{
}

MyUser::~MyUser()
{
}


// MyUser 멤버 함수
void MyUser::OnReceive(int nErrorCode)
{
	// int형 값을 받는다고 가정한 경우
	int value;
	Receive(&value, sizeof(int));
	
	// Main Window 주소값 ->
	AfxGetMainWnd()->SetDlgItemInt(IDC_VALUE_EDIT, value);

	value = 1;
	Send(&value, sizeof(int));

	CSocket::OnReceive(nErrorCode);
}

void MyUser::OnClose(int nErrorCode)
{
	CSocket::OnClose(nErrorCode);
	
	// 전송 중인 경우에 초기화
	ShutDown(2); // 2 : 읽기, 쓰기 초기화
	// 소켓 닫기 
	Close();
}