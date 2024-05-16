#pragma once
#include<iostream>
#include<opencv2/opencv.hpp>
#include"freeMemory.h"
using namespace std;
using namespace cv;

int** conv(int** A, int n, const int B[3][3])
{
	int** C = new int* [n];
	for (int i = 0; i < n; i++)
	{
		C[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			C[i][j] = 0;
			for (int k = max(i - 1, 0); k <= min(i + 1, n - 1); k++)
			{
				for (int l = max(j - 1, 0); l <= min(j + 1, n - 1); l++)
				{
					C[i][j] += A[k][l] * B[k - i + 1][l - j + 1];
				}
			}
		}
	}
	return C;
}

void matrixConvAppl()
{
	Mat image = imread("images/demolena.jpg");
	imshow("原图", image);

	int rows = image.rows;
	int cols = image.cols;
	int** A = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		A[i] = new int[cols];
		for (int j = 0; j < cols; j++)
		{
			A[i][j] = image.at<Vec3b>(i, j)[0];
		}
	}
	const int B[6][3][3] =
	{
		{{1,1,1},
		{1,1,1},
		{1,1,1}},

		{{-1,-2,-1},
		{0,0,0},
		{1,2,1}},

		{{-1,0,1},
		{-2,0,2},
		{-1,0,1}},

		{{-1,-1,-1},
		{-1,9,-1},
		{-1,-1,-1}},

		{{-1,-1,0},
		{-1,0,1},
		{0,1,1}},

		{{1,2,1},
		{2,4,2},
		{1,2,1}}
	};

	const int sum[6] = { 9,0,0,1,0,16 };

	int*** C = new int** [6];
	for (int i = 0; i < 6; i++)C[i] = conv(A, 256, B[i]);
	for (int i = 0; i < 6; i++)
	{
		if (sum[i] != 0)
		{
			for (int j = 0; j < 256; j++)
			{
				for (int k = 0; k < 256; k++)
				{
					C[i][j][k] /= sum[i];
				}
			}
		}
	}
	for (int i = 0; i < 6; i++)
	{
		Mat image1(rows, cols, CV_8UC1);
		for (int j = 0; j < rows; j++)
		{
			for (int k = 0; k < cols; k++)
			{
				image1.at<uchar>(j, k) = max(0, min(255, C[i][j][k]));
			}
		}
		string imageName = "第" + to_string(i + 1) + "个卷积图像";
		imshow(imageName, image1);
	}
	waitKey(0);
	freeMemory(A, rows);
	for (int i = 0; i < 6; i++)freeMemory(C[i], rows);
	delete[] C;
}