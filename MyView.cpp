// MyView.cpp : ʵ���ļ�
//

#include "stdafx.h"
//#include "DlgAddView.h"
#include "MyView.h"


// CMyView

IMPLEMENT_DYNCREATE(CMyView, CView)

CMyView::CMyView()
{

}

CMyView::~CMyView()
{
}

BEGIN_MESSAGE_MAP(CMyView, CView)
END_MESSAGE_MAP()


// CMyView ��ͼ

void CMyView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: �ڴ���ӻ��ƴ���
	
	pDC->MoveTo(0,50);
	pDC->LineTo(200,200);

	CRect rt(0,50,200,200);
	pDC->DrawText(_T("00�����ڶԻ����ϴ�������ͼ"),&rt,DT_LEFT);

}


// CMyView ���

#ifdef _DEBUG
void CMyView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyView ��Ϣ�������
