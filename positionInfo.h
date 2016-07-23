// positionInfo.h

#ifndef _POSITIONINFO_h
#define _POSITIONINFO_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class posInfo
{
public:

	posInfo(int a);
	~posInfo();

	int in_OR_out; //��ʶ��Ȧ������Ȧ
	int isExist = 0; //�Ƿ����
	int R = 0; //red����
	int G = 0; //green����
	int B = 0; //blue����

	int R_tmp = 0;
	int G_tmp = 0;
	int B_tmp = 0;

	float R_f = 0.0;
	float G_f = 0.0;
	float B_f = 0.0;

	int posInfoWrite(int posNum);
	int posInfoRead(int posNum);
	int colorDetect(void);
private:

};

extern posInfo positionInner[20];
extern posInfo positionOuter[20];

#endif
