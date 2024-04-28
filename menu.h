#pragma once
#include<iostream>
using namespace std;
static void menu()
{
	const int Width1 = 6;
	const int Width2 = 16;
	cout.setf(std::ios::left);
	for (int i = 1; i <= Width1 + Width2 * 3 + 1; i++)cout << '*';
	cout << endl;
	cout.width(Width1);
	cout << "*";
	cout.width(Width2);
	cout << "1 矩阵加法";
	cout.width(Width2);
	cout << "2 矩阵数乘";
	cout.width(Width2);
	cout << "3 矩阵转置";
	cout << "*" << endl;
	cout.width(Width1);
	cout << "*";
	cout.width(Width2);
	cout << "4 矩阵乘法";
	cout.width(Width2);
	cout << "5 Hadamard乘积";
	cout.width(Width2);
	cout << "6 矩阵卷积";
	cout << "*" << endl;
	cout.width(Width1);
	cout << "*";
	cout.width(Width2);
	cout << "7 卷积应用";
	cout.width(Width2 * 2);
	cout << "0 退出系统";
	cout << "*" << endl;
	for (int i = 1; i <= Width1 + Width2 * 3 + 1; i++)cout << '*';
}

void waitEnter()
{
	cout << endl << "按回车键继续" << endl;
	while (_getch() != '\r');
}