#pragma once
void freeMemory(int** A, int row)
{
	for (int i = 0; i < row; i++)delete[] A[i];
	delete[] A;
}