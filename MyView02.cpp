// MyView.cpp : 实现文件
//

#include "stdafx.h"
//#include "DlgAddView.h"
#include "MyView02.h"


// CMyView02

IMPLEMENT_DYNCREATE(CMyView02, CView)

CMyView02::CMyView02()
{

}

CMyView02::~CMyView02()
{
}

BEGIN_MESSAGE_MAP(CMyView02, CView)
END_MESSAGE_MAP()


// CMyView02 绘图

void CMyView02::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: 在此添加绘制代码
	
	pDC->MoveTo(0,50);
	pDC->LineTo(200,200);

	CRect rt(0,50,200,200);
	pDC->DrawText(_T("00这是在对话框上创建的视图"),&rt,DT_LEFT);

}


// CMyView02 诊断

#ifdef _DEBUG
void CMyView02::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyView02::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyView02 消息处理程序
