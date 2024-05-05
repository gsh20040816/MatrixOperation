#pragma once
#include<opencv2/opencv.hpp>
using namespace cv;

Mat doOTSU(Mat image)
{
	Mat gray;
	cvtColor(image, gray, COLOR_BGR2GRAY);
	Mat binary;
	threshold(gray, binary, 0, 255, THRESH_OTSU);
	return binary;
}

void OTSU()
{
	const string images[] =
	{
		"brain.jpg",
		"demolena.jpg",
		"polyhedrosis.jpg",
		"ship.jpg",
		"snowball.jpg"
	};
	while (true)
	{
		system("cls");
		cout << "请选择要进行OTSU阈值分割的图片：" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << i + 1 << '.' << images[i] << endl;
		}
		cout << 0 << ".返回上级菜单" << endl;
		char choice = _getch();
		if (choice == '0')
		{
			cout << "\n确定返回吗？" << endl;
			char ch = _getch();
			if (ch == 'y' || ch == 'Y' || ch == '\r')break;
			continue;
		}
		cout << endl;
		if (choice < '1' || choice > '5')
		{
			cout << "输入错误" << endl;
			continue;
		}
		string path = "images/" + images[choice - '1'];
		Mat image = imread(path);
		imshow("原图", image);
		imshow("二值化图", doOTSU(image));
		waitKey(0);
		waitEnter();
	}
}