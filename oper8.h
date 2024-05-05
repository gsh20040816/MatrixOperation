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
		cout << "��ѡ��Ҫ����OTSU��ֵ�ָ��ͼƬ��" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << i + 1 << '.' << images[i] << endl;
		}
		cout << 0 << ".�����ϼ��˵�" << endl;
		char choice = _getch();
		if (choice == '0')
		{
			cout << "\nȷ��������" << endl;
			char ch = _getch();
			if (ch == 'y' || ch == 'Y' || ch == '\r')break;
			continue;
		}
		cout << endl;
		if (choice < '1' || choice > '5')
		{
			cout << "�������" << endl;
			continue;
		}
		string path = "images/" + images[choice - '1'];
		Mat image = imread(path);
		imshow("ԭͼ", image);
		imshow("��ֵ��ͼ", doOTSU(image));
		waitKey(0);
		waitEnter();
	}
}