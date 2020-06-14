/*
====================================================== =
2020�깤�̵ײ�ܹ���ҵ
====================================================== =
File description

���ǵ�������ҵ�ύ����, ����C++����,������VS2017
�ύ�ߣ��ܼ���
ѧ�� ��31903130

====================================================== =
Data                              Description of output
14 / 6 / 2020                     Generate a set of random numbers��complete sorting
14/ 6 / 2020                     Numbers change��complete sorting
14 / 6 / 2020                     Numbers change again��complete sorting
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
	int iRandomArray[SIZEOFARRAY];//����������
	int iRealSizeofArray=SIZEOFARRAY;//��ʼ��

	cout << "����ǰ��"<<endl;
	ArrayGenerate(iRandomArray,iRealSizeofArray);//����10��100���ڵ��������������
	ArrayDisplay(iRandomArray, iRealSizeofArray);//���������ÿ��Ԫ��

	cout << "�����" << endl;;
	SortInsert(iRandomArray, iRealSizeofArray);//��������ÿ��Ԫ�ؽ���С���������
	ArrayDisplay(iRandomArray, iRealSizeofArray);//���������Ԫ��

	return 0;
}