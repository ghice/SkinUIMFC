#ifndef STATIC_HEAD_FILE
#define STATIC_HEAD_FILE

#pragma once

#include "SkinUI.h"
#include "ISkinControl.h"
class CSkinStatic : public CStatic, public ISkinControl
{
    DECLARE_DYNAMIC(CSkinStatic)
    //��������
public:
    //���캯��
    CSkinStatic();
    //��������
    ~CSkinStatic();
    //���غ���
protected:
    //��Ϣѭ��
    virtual LRESULT DefWindowProc(UINT message, WPARAM wParam, LPARAM lParam);
    //��������
    virtual void SetAttribute(LPCTSTR pstrName, LPCTSTR pstrValue);
    //�����ؼ�
    virtual BOOL CreateControl(CWnd* pParentWnd);
public:
    ////��������
    //void SetWindowText(LPCTSTR txt);
    
    //��Ϣ����
protected:
    //�ػ汳��
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    //������Ϣ
    afx_msg void OnDestroy();
    //������Ϣ
    afx_msg void OnPaint();
protected:
    DECLARE_MESSAGE_MAP()
private:
	int		nFontIndex;
};

#endif

