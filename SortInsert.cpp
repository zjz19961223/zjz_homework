#include <algorithm>
#include <assert.h>
#include "SortInsert.hpp"
using namespace std;

void SortInsert(int iRandomArray[]/*IO*/,int iRealSizeofArray)
{
	assert(NULL != iRealSizeofArray);
	assert(SIZEOFARRAY == iRealSizeofArray);//¶ÏÑÔ

	sort(iRandomArray, iRandomArray + 10);//¶ÔÊý×éÅÅÐò
}