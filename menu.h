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
	cout << "1 ����ӷ�";
	cout.width(Width2);
	cout << "2 ��������";
	cout.width(Width2);
	cout << "3 ����ת��";
	cout << "*" << endl;
	cout.width(Width1);
	cout << "*";
	cout.width(Width2);
	cout << "4 ����˷�";
	cout.width(Width2);
	cout << "5 Hadamard�˻�";
	cout.width(Width2);
	cout << "6 ������";
	cout << "*" << endl;
	cout.width(Width1);
	cout << "*";
	cout.width(Width2);
	cout << "7 ���Ӧ��";
	cout.width(Width2 * 2);
	cout << "0 �˳�ϵͳ";
	cout << "*" << endl;
	for (int i = 1; i <= Width1 + Width2 * 3 + 1; i++)cout << '*';
}

void waitEnter()
{
	cout << endl << "���س�������" << endl;
	while (_getch() != '\r');
}