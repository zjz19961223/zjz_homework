/*
====================================================== =
2020年工程底层架构作业
====================================================== =
File description

这是第三次作业提交程序, 采用C++语言,编译器VS2017
提交者：周加增
学号 ：31903130

====================================================== =
Data                              Description of output
14 / 6 / 2020                     Generate a set of random numbers，complete sorting
14/ 6 / 2020                     Numbers change，complete sorting
14 / 6 / 2020                     Numbers change again，complete sorting
====================================================== =
*/

#include "ArrayGenerate.hpp"
#include "SortInsert.hpp"
#include "ArrayDisplay.hpp"
#include <iostream>
#include <ctime>
#include <algorithm>
#include <assert.h>
using namespace std;

const int SIZEOFARRAY = 10;

int main(int argc, char * argv[])
{
	int iRandomArray[SIZEOFARRAY];//建立空数组
	int iRealSizeofArray=SIZEOFARRAY;//初始化

	cout << "排序前："<<endl;
	ArrayGenerate(iRandomArray,iRealSizeofArray);//生成10个100以内的数，并组成数组
	ArrayDisplay(iRandomArray, iRealSizeofArray);//输出数组中每个元素

	cout << "排序后：" << endl;;
	SortInsert(iRandomArray, iRealSizeofArray);//对数组中每个元素进行小到大的排序
	ArrayDisplay(iRandomArray, iRealSizeofArray);//输出排序后的元素

	return 0;
}