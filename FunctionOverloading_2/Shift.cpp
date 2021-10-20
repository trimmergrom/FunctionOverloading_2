#include "Shift.h"
#include "stdafx.h"
#include "Constants.h"

/*void ShiftManager(int arr[], int arr_1[], const unsigned int n)
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
}*/