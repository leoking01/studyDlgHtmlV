
// studyDlgHtmlV.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CstudyDlgHtmlVApp:
// �йش����ʵ�֣������ studyDlgHtmlV.cpp
//

class CstudyDlgHtmlVApp : public CWinApp
{
public:
	CstudyDlgHtmlVApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CstudyDlgHtmlVApp theApp;