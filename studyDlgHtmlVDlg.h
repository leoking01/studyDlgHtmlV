
// studyDlgHtmlVDlg.h : ͷ�ļ�
//

#pragma once

#include "MyView.h"

// CstudyDlgHtmlVDlg �Ի���
class CstudyDlgHtmlVDlg : public CDialogEx
{
// ����
public:
	CstudyDlgHtmlVDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_STUDYDLGHTMLV_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	CMyView  * m_pView;
};
