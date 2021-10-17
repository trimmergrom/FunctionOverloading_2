#include "Function.h"
void ArrRand(int arr[], int arr_1[], const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr_1[i] = arr[i];
	}
}
void ArrRand(double arr[], int arr_1[], const unsigned int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		//arr_1[i] = arr[i];
	}
}
void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\t Sourse Array" << endl << endl;
}
void Print(double arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\t Sourse Array" << endl << endl;
}
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << " ";
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
	cout << "\t Revers Array" << endl << endl;
}
int Summ(int arr[], const unsigned int n)
{
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}
double Avg(int summ, const unsigned int n)
{
	return  (double)summ / n;
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
int MinValue(int arr[], const unsigned int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) { min = arr[i]; }
	}
	return min;
}
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
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "The array is sorted in ascending order" << endl << endl;
}
void ShiftManager(int arr[], int arr_1[], const unsigned int n)
{
	int shift;
	char e;
	do
	{
		cout << "Enter Shift from 1 to " << n - 1 << "\n";
		cout << "To shift the array to the right, enter a positive number" << endl;
		cout << "To shift the aray to the left, enter a negative namber" << endl;
		cin >> shift;
		shift >= 0 ? Shift_Rigth(arr, arr_1, n, shift) : Shift_Left(arr, arr_1, n, shift);
		cout << "\n\n To continue press any key, to exit press Esc" << endl;
		e = _getch();
	} while (e != 27);
}
void Shift_Rigth(int arr[], int arr_1[], const unsigned int n, int shift)
{
	for (int j = 0; j < shift; j++)
	{
		arr[j] = arr_1[n - shift + j];
	}
	for (int j = shift; j < n; j++)
	{
		arr[j] = arr_1[j - shift];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "The array is shifted to the rigth by " << shift << " elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr_1[i] << "\t";
	}
}
void Shift_Left(int arr[], int arr_1[], const unsigned int n, int shift)
{
	for (int j = 0; j < n - abs(shift); j++)
	{
		arr[j] = arr_1[j + abs(shift)];
	}
	for (int j = n - abs(shift); j < n; j++)
	{
		arr[j] = arr_1[j - n + abs(shift)];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "The array is shifted to the left by " << abs(shift) << " elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr_1[i] << "\t";
	}
}