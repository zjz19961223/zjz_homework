#include <iostream>
#include <assert.h>
#include "ArrayDisplay.hpp"
using namespace std;


void ArrayDisplay(int iRandomArray[]/*O*/,int iRealSizeofArray/*I*/)
{
	assert(NULL!= iRealSizeofArray);//断言
	assert(SIZEOFARRAY == iRealSizeofArray);//断言
	
	for (int iLoopofArray = 0; iLoopofArray < SIZEOFARRAY; ++iLoopofArray)//输出数组中每个元素
	{
		assert(iLoopofArray >= 0 && iLoopofArray < SIZEOFARRAY);//防止数组越界

		cout << iRandomArray[iLoopofArray]<<endl;
	}
	cout << endl;
}