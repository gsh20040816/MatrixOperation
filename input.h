#pragma once
#include<iostream>
using namespace std;
bool input(int**& A, int& row, int& col, string name)
{
	cout << "���������" << name << "��������������";
	cin >> row >> col;
	if (row <= 0 || col <= 0)
	{
		cout << "�������" << endl;
		return false;
	}
	A = new int* [row];
	for (int i = 0; i < row; i++)
	{
		A[i] = new int[col];
	}
	cout << "���������" << name << "��Ԫ�أ�ÿ��Ԫ��֮���ÿո������ÿ�н����󰴻س�����" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> A[i][j];
		}
	}
	return true;
}