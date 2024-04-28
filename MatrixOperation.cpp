#include<iostream>
#include<conio.h>
#include"menu.h"
#include"oper1t6.h"
#include"oper7.h"
using namespace std;

int main()
{
	while (true)
	{
		system("cls");
		menu();
		char choice = _getch();
		if (choice == '0')
		{
			cout << "\n确定退出吗？" << endl;
			char ch = _getch();
			if (ch == 'y' || ch == 'Y' || ch == '\r')break;
			continue;
		}
		cout << endl;
		switch (choice)
		{
		case '1':
			matrixPlus();
			break;
		case '2':
			matrixNumMul();
			break;
		case '3':
			matrixTrans();
			break;
		case '4':
			matrixMul();
			break;
		case '5':
			matrixHadamardMul();
			break;
		case '6':
			matrixConv();
			break;
		case '7':
			matrixConvAppl();
			break;
		default:
			cout << "输入错误";
		}
		waitEnter();
	}
}