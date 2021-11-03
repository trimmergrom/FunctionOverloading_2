#include "Constants.h"
#include "stdafx.h"

int Summ(int arr[], const unsigned int n)
{
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}
double Summ(double arr[], const unsigned int n)
{
	double summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}
float Summ(float arr[], const unsigned int n)
{
	float summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}
double Summ(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	int summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summ += arr[i][j];
		}
	}
	return summ;
}
double Summ(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	double summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summ += arr[i][j];
		}
	}
	return summ;
}
float Summ(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	float summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summ += arr[i][j];
		}
	}
	return summ;
}
double Avg(int summ, const unsigned int n)
{
	return  (double)summ / n;
}
double Avg(double summ, const unsigned int n)
{
	return  summ / n;
}
float Avg(float summ, const unsigned int n)
{
	return  summ / n;
}
double Avg(double summ, const unsigned int ROWS, const unsigned int COLS)
{
	return  summ / (ROWS*COLS);
}
float Avg(float summ, const unsigned int ROWS, const unsigned int COLS)
{
	return  summ / (ROWS * COLS);
}
int MaxValue(int arr[], const unsigned int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) { max = arr[i]; }
	}
	return max;
}
double MaxValue(double arr[], const unsigned int n)
{
	double max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) { max = arr[i]; }
	}
	return max;
}
float MaxValue(float arr[], const unsigned int n)
{
	float max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) { max = arr[i]; }
	}
	return max;
}
int MinValue(int arr[], const unsigned int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) { min = arr[i]; }
	}
	return min;
}
double MinValue(double arr[], const unsigned int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) { min = arr[i]; }
	}
	return min;
}
float MinValue(float arr[], const unsigned int n)
{
	float min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) { min = arr[i]; }
	}
	return min;
}
int MaxValue(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	int max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
		if (max < arr[i][j]) { max = arr[i][j]; }
		}
	}
	return max;
}
int MinValue(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	int min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (min > arr[i][j]) { min = arr[i][j]; }
		}
	}
	return min;
}
double MaxValue(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	double max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (max < arr[i][j]) { max = arr[i][j]; }
		}
	}
	return max;
}
double MinValue(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	double min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (min > arr[i][j]) { min = arr[i][j]; }
		}
	}
	return min;
}
float MaxValue(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	float max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (max < arr[i][j]) { max = arr[i][j]; }
		}
	}
	return max;
}
float MinValue(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	float min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (min > arr[i][j]) { min = arr[i][j]; }
		}
	}
	return min;
}