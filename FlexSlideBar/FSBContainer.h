#pragma once

#include "FlexSlideWnd.h"
#include "FlexSlideBarDef.h"
#include "DllDefine.h"


class FLEXSLIDEBAR_EXPORT CFSBContainer
{
public:
	CFSBContainer(void);
	virtual ~CFSBContainer(void);

	BOOL CreateInstance(CWnd* pParentWnd, DWORD dwStyle, CRect rc);


	void SetFSBStyle(FSB_STYLE fsbStyle);
	FSB_STYLE GetFSBStyle();

	void SetFSBThumbShape(FSB_THUMBSHAPE fsbTbShape);

	// ���ÿؼ���λ��
	void SetFlexSlideBarRect(CRect& rc);	
//	CRect& GetFlexSlideBarRect();

	// ����channel�Ŀ��ȣ����ô��ڿؼ����ȣ���С��1������
	// channel ����Ӧ�����ݿؼ�������������
	void SetChannelWidth(int nChannelWidth);
	int GetChannelWidth();

	// ����Channel����ɫ
	COLORREF GetChannelColor();					
	void SetChannelColor(COLORREF clrChannel);

	// ����Thumb�ĳ��ȣ���С��channel�Ŀ��ȣ������ڿؼ��Ŀ��ȣ�thumb�Ŀ���Ϊ�̶�ֵ
	int GetThumbWidth();					
	void SetThumbWidth(int nThumbLen);

	// ����Thumb����ɫ
	COLORREF GetThumbColor()const;					
	void SetThumbColor(COLORREF clrThumb);

	//Sets the maximum position for a slider. 
	void	SetRangeMax(int nMax);
	void	SetRangeMin(int nMin);

	// �ؼ��Ƿ�ˮƽ����
	void SetHorizontal(BOOL bHorizontal);
	BOOL IsHorizontal();


	void SetPageLength(int nPageLength);

	BOOL CreateFlexSlideBar(
		BOOL bHorizontal,	
		FSB_STYLE style=FSB_STYLE_SINGLETHUMB, 
		int nChannelWidth=10, 
		int nThumbWidth=12, 
		FSB_THUMBSHAPE tbShape=FSB_THUMBSHAPE_RECT									   
		);


	//Sets the minimum and maximum positions for a slider. 
	void SetRange(int nMax, int nMin);

	//Retrieves the minimum and maximum positions for a slider. 
	void GetRange(int& nMin, int& nMax)const;

	// Sets the current position of the slider. 
	// nMinPos ����С��ֵ��MidPos���е�ֵ��Max������ֵ
	BOOL SetPos(int nMinPos, int nMidPos, int nMaxPos); 	
	BOOL SetPos_tstat6_2pos(int nMinPos, int nMidPos, int nMaxPos); 
	BOOL SetPos_tstat6_3pos(int nMinPos, int nMidPos, int nMaxPos); 
	// Retrieves the current position of the slider. 
	int	GetPos(vector<int>& szPos);
	
	CFSBChannel* GetFSBChannel();

	void SetParentWnd(CWnd* pParent);

	void ShowWindow(int nFlag);

	void  SendCallBackMsg();
	void Setflag(int mint)
	{
		m_sort = mint;
	}
	int Getflag()
	{
		return m_sort;
	}

	
private:

	CFlexSlideWnd*      m_pFSWnd;
	int m_sort;
};