#pragma once


// CMyView02 视图

class CMyView02 : public CView
{
	DECLARE_DYNCREATE(CMyView02)

protected:
	CMyView02();           // 动态创建所使用的受保护的构造函数
	virtual ~CMyView02();

public:
	virtual void OnDraw(CDC* pDC);      // 重写以绘制该视图
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
};


