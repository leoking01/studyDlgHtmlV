#pragma once


// CMyView02 ��ͼ

class CMyView02 : public CView
{
	DECLARE_DYNCREATE(CMyView02)

protected:
	CMyView02();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CMyView02();

public:
	virtual void OnDraw(CDC* pDC);      // ��д�Ի��Ƹ���ͼ
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
};


