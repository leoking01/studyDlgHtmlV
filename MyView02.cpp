// MyView.cpp : ʵ���ļ�
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


// CMyView02 ��ͼ

void CMyView02::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: �ڴ���ӻ��ƴ���
	
	pDC->MoveTo(0,50);
	pDC->LineTo(200,200);

	CRect rt(0,50,200,200);
	pDC->DrawText(_T("00�����ڶԻ����ϴ�������ͼ"),&rt,DT_LEFT);

}


// CMyView02 ���

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


// CMyView02 ��Ϣ�������
