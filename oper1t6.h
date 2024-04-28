#pragma once
#include<iostream>
using namespace std;

void matrixPlus()
{
	cout << "请输入矩阵A的行数和列数：" << endl;
	int rowA, colA;
	cin >> rowA >> colA;
	cout << "请输入矩阵A的元素：" << endl;
	int** A = new int* [rowA];
	for (int i = 0; i < rowA; i++)
	{
		A[i] = new int[colA];
		for (int j = 0; j < colA; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "请输入矩阵B的行数和列数：" << endl;
	int rowB, colB;
	cin >> rowB >> colB;
	cout << "请输入矩阵B的元素：" << endl;
	int** B = new int* [rowB];
	for (int i = 0; i < rowB; i++)
	{
		B[i] = new int[colB];
		for (int j = 0; j < colB; j++)
		{
			cin >> B[i][j];
		}
	}
	if (rowA != rowB || colA != colB)
	{
		cout << "矩阵A和矩阵B的行数或列数不相等，无法相加！" << endl;
		return;
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
}

void matrixNumMul()
{
	cout << "请输入矩阵A的行数和列数：" << endl;
	int rowA, colA;
	cin >> rowA >> colA;
	cout << "请输入矩阵A的元素：" << endl;
	int** A = new int* [rowA];
	for (int i = 0; i < rowA; i++)
	{
		A[i] = new int[colA];
		for (int j = 0; j < colA; j++)
		{
			cin >> A[i][j];
		}
	}
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
}

void matrixTrans()
{
	cout << "请输入矩阵A的行数和列数：" << endl;
	int rowA, colA;
	cin >> rowA >> colA;
	cout << "请输入矩阵A的元素：" << endl;
	int** A = new int* [rowA];
	for (int i = 0; i < rowA; i++)
	{
		A[i] = new int[colA];
		for (int j = 0; j < colA; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "矩阵A的转置矩阵为：" << endl;
	for (int i = 0; i < colA; i++)
	{
		for (int j = 0; j < rowA; j++)
		{
			cout << A[j][i] << ' ';
		}
		cout << endl;
	}
}

void matrixMul()
{
	cout << "请输入矩阵A的行数和列数：" << endl;
	int rowA, colA;
	cin >> rowA >> colA;
	cout << "请输入矩阵A的元素：" << endl;
	int** A = new int* [rowA];
	for (int i = 0; i < rowA; i++)
	{
		A[i] = new int[colA];
		for (int j = 0; j < colA; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "请输入矩阵B的行数和列数：" << endl;
	int rowB, colB;
	cin >> rowB >> colB;
	cout << "请输入矩阵B的元素：" << endl;
	int** B = new int* [rowB];
	for (int i = 0; i < rowB; i++)
	{
		B[i] = new int[colB];
		for (int j = 0; j < colB; j++)
		{
			cin >> B[i][j];
		}
	}
	if (colA != rowB)
	{
		cout << "矩阵A的列数和矩阵B的行数不相等，无法相乘！" << endl;
		return;
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
}

void matrixHadamardMul()
{
	cout << "请输入矩阵A的行数和列数：" << endl;
	int rowA, colA;
	cin >> rowA >> colA;
	cout << "请输入矩阵A的元素：" << endl;
	int** A = new int* [rowA];
	for (int i = 0; i < rowA; i++)
	{
		A[i] = new int[colA];
		for (int j = 0; j < colA; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "请输入矩阵B的行数和列数：" << endl;
	int rowB, colB;
	cin >> rowB >> colB;
	cout << "请输入矩阵B的元素：" << endl;
	int** B = new int* [rowB];
	for (int i = 0; i < rowB; i++)
	{
		B[i] = new int[colB];
		for (int j = 0; j < colB; j++)
		{
			cin >> B[i][j];
		}
	}
	if (rowA != rowB || colA != colB)
	{
		cout << "矩阵A和矩阵B的行数或列数不相等，无法进行Hadamard乘积！" << endl;
		return;
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
}

void matrixConv()
{
	cout << "请输入方阵A的边长：" << endl;
	int n;
	cin >> n;
	cout << "请输入方阵A的元素：" << endl;
	int** A = new int* [n + 2];
	for (int i = 0; i < n + 2; i++)
	{
		A[i] = new int[n + 2];
		for (int j = 0; j < n + 2; j++)A[i][j] = 0;
		if (i == 0 || i == n + 1)continue;
		for (int j = 1; j < n + 1; j++)
		{
			cin >> A[i][j];
		}
	}
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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int sum = 0;
			for (int k = 0; k < 3; k++)
			{
				for (int l = 0; l < 3; l++)
				{
					sum += A[i + k][j + l] * B[k][l];
				}
			}
			cout << sum << ' ';
		}
		cout << endl;
	}
}