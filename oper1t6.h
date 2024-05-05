#pragma once
#include"freeMemory.h"
#include"input.h"

void matrixPlus()
{
	int rowA, colA, ** A;
	if (!input(A, rowA, colA, "A"))return;
	int rowB, colB, ** B;
	if (!input(B, rowB, colB, "B"))return;
	if (rowA != rowB || colA != colB)
	{
		cout << "����A�;���B����������������ȣ��޷���ӣ�" << endl;
		return freeMemory(A, rowA), freeMemory(B, rowB);
	}
	cout << "����A�Ӿ���B�Ľ��Ϊ��" << endl;
	for (int i = 0; i < rowA; i++)
	{
		for (int j = 0; j < colA; j++)
		{
			cout << A[i][j] + B[i][j] << ' ';
		}
		cout << endl;
	}
	return freeMemory(A, rowA), freeMemory(B, rowB);
}

void matrixNumMul()
{
	int rowA, colA, ** A;
	if (!input(A, rowA, colA, "A"))return;
	cout << "��������ֵk��" << endl;
	int k;
	cin >> k;
	cout << "����A������ֵk�Ľ��Ϊ��" << endl;
	for (int i = 0; i < rowA; i++)
	{
		for (int j = 0; j < colA; j++)
		{
			cout << A[i][j] * k << ' ';
		}
		cout << endl;
	}
	return freeMemory(A, rowA);
}

void matrixTrans()
{
	int rowA, colA, ** A;
	if (!input(A, rowA, colA, "A"))return;
	cout << "����A��ת�þ���Ϊ��" << endl;
	for (int i = 0; i < colA; i++)
	{
		for (int j = 0; j < rowA; j++)
		{
			cout << A[j][i] << ' ';
		}
		cout << endl;
	}
	return freeMemory(A, rowA);
}

void matrixMul()
{
	int rowA, colA, ** A;
	if (!input(A, rowA, colA, "A"))return;
	int rowB, colB, ** B;
	if (!input(B, rowB, colB, "B"))return;
	if (colA != rowB)
	{
		cout << "����A�������;���B����������ȣ��޷���ˣ�" << endl;
		return freeMemory(A, rowA), freeMemory(B, rowB);
	}
	cout << "����A���Ծ���B�Ľ��Ϊ��" << endl;
	for (int i = 0; i < rowA; i++)
	{
		for (int j = 0; j < colB; j++)
		{
			int sum = 0;
			for (int k = 0; k < colA; k++)
			{
				sum += A[i][k] * B[k][j];
			}
			cout << sum << ' ';
		}
		cout << endl;
	}
	return freeMemory(A, rowA), freeMemory(B, rowB);
}

void matrixHadamardMul()
{
	int rowA, colA, ** A;
	if (!input(A, rowA, colA,"A"))return;
	int rowB, colB, ** B;
	if (!input(B, rowB, colB,"B"))return;
	if (rowA != rowB || colA != colB)
	{
		cout << "����A�;���B����������������ȣ��޷�����Hadamard�˻���" << endl;
		return freeMemory(A, rowA), freeMemory(B, rowB);
	}
	cout << "����A�;���B��Hadamard�˻�Ϊ��" << endl;
	for (int i = 0; i < rowA; i++)
	{
		for (int j = 0; j < colA; j++)
		{
			cout << A[i][j] * B[i][j] << ' ';
		}
		cout << endl;
	}
	return freeMemory(A, rowA), freeMemory(B, rowB);
}

void matrixConv()
{
	int rowA, colA, ** A;
	if (!input(A, rowA, colA, "A"))return;
	cout << "�����B�ı߳�Ϊ3������������B��Ԫ�أ�" << endl;
	int** B = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		B[i] = new int[3];
		for (int j = 0; j < 3; j++)
		{
			cin >> B[i][j];
		}
	}
	cout << "���� padding=1, stride=1, dilation=1" << endl;
	cout << "������CΪ��" << endl;
	for (int i = 0; i < rowA; i++)
	{
		for (int j = 0; j < colA; j++)
		{
			int sum = 0;
			for (int k = -1; k <= 1; k++)
			{
				for (int l = -1; l <= 1; l++)
				{
					if (i + k >= 0 && i + k < rowA && j + l >= 0 && j + l < colA)
					{
						sum += A[i + k][j + l] * B[k + 1][l + 1];
					}
				}
			}
			cout << sum << ' ';
		}
		cout << endl;
	}
	return freeMemory(A, rowA), freeMemory(B, 3);
}