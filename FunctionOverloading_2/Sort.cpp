#include "Constants.h"
//#include "Sort.h"
#include "stdafx.h"

void SortArr(int arr[], const unsigned int n)
{
	int j = 0;
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		j = i;
		for (int k = i; k < n; k++)
		{
			if (arr[j] > arr[k]) { j = k; }
		}
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		cout << arr[i] << "\t";
	}
}
void SortArr(double arr[], const unsigned int n)
{
	int j = 0;
	double tmp = 0;
	for (int i = 0; i < n; i++)
	{
		j = i;
		for (int k = i; k < n; k++)
		{
			if (arr[j] > arr[k]) { j = k; }
		}
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		cout << arr[i] << "\t";
	}
}
void SortArr(float arr[], const unsigned int n)
{
	int j = 0;
	float tmp = 0;
	for (int i = 0; i < n; i++)
	{
		j = i;
		for (int k = i; k < n; k++)
		{
			if (arr[j] > arr[k]) { j = k; }
		}
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		cout << arr[i] << "\t";
	}
}
void SortArr(char arr[], const unsigned int n)
{
	int j = 0;
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		j = i;
		for (int k = i; k < n; k++)
		{
			if (arr[j] > arr[k]) { j = k; }
		}
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << (int)arr[i] << "\t";
	}
}
void SortArr(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{	
	for (int k = 0; k < ROWS; k++)
	{
		for (int s = 0; s < COLS; s++)
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					if (arr[k][s] < arr[i][j])
					{
						int tmp = arr[k][s];
						arr[k][s] = arr[i][j];
						arr[i][j] = tmp;
					}
				}
			}
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}		
}
void SortArr(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{	
	for (int k = 0; k < ROWS; k++)
	{
		for (int s = 0; s < COLS; s++)
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					if (arr[k][s] < arr[i][j])
					{
						double tmp = arr[k][s];
						arr[k][s] = arr[i][j];
						arr[i][j] = tmp;
					}
				}
			}
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void SortArr(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int k = 0; k < ROWS; k++)
	{
		for (int s = 0; s < COLS; s++)
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					if (arr[k][s] < arr[i][j])
					{
						float tmp = arr[k][s];
						arr[k][s] = arr[i][j];
						arr[i][j] = tmp;
					}
				}
			}
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
