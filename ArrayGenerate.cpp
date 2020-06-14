#include <ctime>
#include <assert.h>
#include <iostream>
#include "ArrayGenerate.hpp"


void ArrayGenerate(int iRandomArray[]/*I*/,int iRealSizeofArray/*I*/)
{
	assert(NULL != iRealSizeofArray);//断言
	assert(SIZEOFARRAY == iRealSizeofArray);//断言
	
	srand((unsigned int)(time(0)));//根据时间产生不同的数
	for (int iLoopofArray = 0; iLoopofArray < SIZEOFARRAY; ++iLoopofArray)
	{
		assert(iLoopofArray >= 0 && iLoopofArray < SIZEOFARRAY);//防止数组越界

		iRandomArray[iLoopofArray] = rand() % 101;//控制随机数在100以内
	}
}