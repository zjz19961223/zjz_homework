#include <ctime>
#include <assert.h>
#include <iostream>
#include "ArrayGenerate.hpp"


void ArrayGenerate(int iRandomArray[]/*I*/,int iRealSizeofArray/*I*/)
{
	assert(NULL != iRealSizeofArray);//����
	assert(SIZEOFARRAY == iRealSizeofArray);//����
	
	srand((unsigned int)(time(0)));//����ʱ�������ͬ����
	for (int iLoopofArray = 0; iLoopofArray < SIZEOFARRAY; ++iLoopofArray)
	{
		assert(iLoopofArray >= 0 && iLoopofArray < SIZEOFARRAY);//��ֹ����Խ��

		iRandomArray[iLoopofArray] = rand() % 101;//�����������100����
	}
}