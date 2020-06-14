#include <iostream>
#include <assert.h>
#include "ArrayDisplay.hpp"
using namespace std;


void ArrayDisplay(int iRandomArray[]/*O*/,int iRealSizeofArray/*I*/)
{
	assert(NULL!= iRealSizeofArray);//����
	assert(SIZEOFARRAY == iRealSizeofArray);//����
	
	for (int iLoopofArray = 0; iLoopofArray < SIZEOFARRAY; ++iLoopofArray)//���������ÿ��Ԫ��
	{
		assert(iLoopofArray >= 0 && iLoopofArray < SIZEOFARRAY);//��ֹ����Խ��

		cout << iRandomArray[iLoopofArray]<<endl;
	}
	cout << endl;
}