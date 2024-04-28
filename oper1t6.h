#pragma once
#include<iostream>
using namespace std;

void matrixPlus()
{
	cout << "���������A��������������" << endl;
	int rowA, colA;
	cin >> rowA >> colA;
	cout << "���������A��Ԫ�أ�" << endl;
	int** A = new int* [rowA];
	for (int i = 0; i < rowA; i++)
	{
		A[i] = new int[colA];
		for (int j = 0; j < colA; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "���������B��������������" << endl;
	int rowB, colB;
	cin >> rowB >> colB;
	cout << "���������B��Ԫ�أ�" << endl;
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
		cout << "����A�;���B����������������ȣ��޷���ӣ�" << endl;
		return;
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
}

void matrixNumMul()
{
	cout << "���������A��������������" << endl;
	int rowA, colA;
	cin >> rowA >> colA;
	cout << "���������A��Ԫ�أ�" << endl;
	int** A = new int* [rowA];
	for (int i = 0; i < rowA; i++)
	{
		A[i] = new int[colA];
		for (int j = 0; j < colA; j++)
		{
			cin >> A[i][j];
		}
	}
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
}

void matrixTrans()
{
	cout << "���������A��������������" << endl;
	int rowA, colA;
	cin >> rowA >> colA;
	cout << "���������A��Ԫ�أ�" << endl;
	int** A = new int* [rowA];
	for (int i = 0; i < rowA; i++)
	{
		A[i] = new int[colA];
		for (int j = 0; j < colA; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "����A��ת�þ���Ϊ��" << endl;
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
	cout << "���������A��������������" << endl;
	int rowA, colA;
	cin >> rowA >> colA;
	cout << "���������A��Ԫ�أ�" << endl;
	int** A = new int* [rowA];
	for (int i = 0; i < rowA; i++)
	{
		A[i] = new int[colA];
		for (int j = 0; j < colA; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "���������B��������������" << endl;
	int rowB, colB;
	cin >> rowB >> colB;
	cout << "���������B��Ԫ�أ�" << endl;
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
		cout << "����A�������;���B����������ȣ��޷���ˣ�" << endl;
		return;
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
}

void matrixHadamardMul()
{
	cout << "���������A��������������" << endl;
	int rowA, colA;
	cin >> rowA >> colA;
	cout << "���������A��Ԫ�أ�" << endl;
	int** A = new int* [rowA];
	for (int i = 0; i < rowA; i++)
	{
		A[i] = new int[colA];
		for (int j = 0; j < colA; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "���������B��������������" << endl;
	int rowB, colB;
	cin >> rowB >> colB;
	cout << "���������B��Ԫ�أ�" << endl;
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
		cout << "����A�;���B����������������ȣ��޷�����Hadamard�˻���" << endl;
		return;
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
}

void matrixConv()
{
	cout << "�����뷽��A�ı߳���" << endl;
	int n;
	cin >> n;
	cout << "�����뷽��A��Ԫ�أ�" << endl;
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