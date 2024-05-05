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
		cout << "矩阵A和矩阵B的行数或列数不相等，无法相加！" << endl;
		return freeMemory(A, rowA), freeMemory(B, rowB);
	}
	cout << "矩阵A加矩阵B的结果为：" << endl;
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
	cout << "请输入数值k：" << endl;
	int k;
	cin >> k;
	cout << "矩阵A乘以数值k的结果为：" << endl;
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
	cout << "矩阵A的转置矩阵为：" << endl;
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
		cout << "矩阵A的列数和矩阵B的行数不相等，无法相乘！" << endl;
		return freeMemory(A, rowA), freeMemory(B, rowB);
	}
	cout << "矩阵A乘以矩阵B的结果为：" << endl;
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
		cout << "矩阵A和矩阵B的行数或列数不相等，无法进行Hadamard乘积！" << endl;
		return freeMemory(A, rowA), freeMemory(B, rowB);
	}
	cout << "矩阵A和矩阵B的Hadamard乘积为：" << endl;
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
	cout << "卷积核B的边长为3，请输入卷积核B的元素：" << endl;
	int** B = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		B[i] = new int[3];
		for (int j = 0; j < 3; j++)
		{
			cin >> B[i][j];
		}
	}
	cout << "参数 padding=1, stride=1, dilation=1" << endl;
	cout << "卷积结果C为：" << endl;
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