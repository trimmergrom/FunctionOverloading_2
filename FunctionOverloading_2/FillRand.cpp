#include "Constants.h"
#include "FillRand.h"
#include "stdafx.h"

void ArrRand(int arr[], int arr_1[], const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr_1[i] = arr[i];
	}
}
void ArrRand(int arr[], int arr_1[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 256;
		arr_1[i] = arr[i];
	}
}
void ArrRand(double arr[], double arr1_DB[], const unsigned int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		arr1_DB[i] = arr[i];
	}
}
void ArrRand(float arr[], const unsigned int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void ArrRand(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void ArrRand(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = rand() % 256;
			}
		}
	}
}
void ArrRand(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand)
{
	{
		minRand *= 100;
		maxRand *= 100;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = rand() % (maxRand - minRand) + minRand;
				arr[i][j] /= 100;
			}
		}
	}
}
void ArrRand(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand)
{
	{
		minRand *= 100;
		maxRand *= 100;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = rand() % (maxRand - minRand) + minRand;
				arr[i][j] /= 100;
			}
		}
	}
}