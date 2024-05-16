#pragma once
#include<iostream>
using namespace std;
bool input(int**& A, int& row, int& col, string name)
{
	cout << "请输入矩阵" << name << "的行数和列数：";
	cin >> row >> col;
	if (row <= 0 || col <= 0)
	{
		cout << "输入错误" << endl;
		return false;
	}
	A = new int* [row];
	for (int i = 0; i < row; i++)
	{
		A[i] = new int[col];
	}
	cout << "请输入矩阵" << name << "的元素，每行元素之间用空格隔开，每行结束后按回车键：" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> A[i][j];
		}
	}
	return true;
}