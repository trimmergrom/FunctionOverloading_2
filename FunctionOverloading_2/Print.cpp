#include "Constants.h"
#include "FillRand.h"
#include "stdafx.h"

template<typename T> void Print(T arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

template<typename T> void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void ReversPrint(int arr[], const unsigned n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}	
}
void ReversPrint1(int arr[], const unsigned n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = n-1; i >= 0; i--)
	{
		cout << (char)arr[i] << "\t";
	}
}
void ReversPrint(double arr[], const unsigned n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}
void ReversPrint(float arr[], const unsigned n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}
void ReversPrint(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = ROWS-1; i >= 0; i--)
	{
		for (int j = COLS-1; j >= 0; j--)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void ReversPrint(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = ROWS - 1; i >= 0; i--)
	{
		for (int j = COLS - 1; j >= 0; j--)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void ReversPrint(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = ROWS - 1; i >= 0; i--)
	{
		for (int j = COLS - 1; j >= 0; j--)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}