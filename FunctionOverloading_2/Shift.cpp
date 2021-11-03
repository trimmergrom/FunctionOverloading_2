#include "Shift.h"
#include "stdafx.h"
#include "Constants.h"
#define PP "\t\t\t\t\t\t\t\t"

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
		cout << "\n\n To continue the shift, press any key, to continue the program, press Esc" << endl;
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
	cout << "The INTEGER Array is shifted to the rigth by " << shift << " elements" << endl;
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
	cout << "The INTEGER Array is shifted to the left by " << abs(shift) << " elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr_1[i] << "\t";
	}
}

void ShiftManager(double arr[], double arr_1[], const unsigned int n)
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
		cout << "\n\n To continue the shift, press any key, to continue the program, press Esc" << endl;
		e = _getch();
	} while (e != 27);
}
void Shift_Rigth(double arr[], double arr_1[], const unsigned int n, int shift)
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
	cout << "The DOUBLE Array is shifted to the rigth by " << shift << " elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr_1[i] << "\t";
	}
}
void Shift_Left(double arr[], double arr_1[], const unsigned int n, int shift)
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
	cout << "The INTEGER Array is shifted to the left by " << abs(shift) << " elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr_1[i] << "\t";
	}
}

void ShiftManager(float arr[], float arr_1[], const unsigned int n)
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
		cout << "\n\n To continue the shift, press any key, to continue the program, press Esc" << endl;
		e = _getch();
	} while (e != 27);
}
void Shift_Rigth(float arr[], float arr_1[], const unsigned int n, int shift)
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
	cout << "The FLOAT Array is shifted to the rigth by " << shift << " elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr_1[i] << "\t";
	}
}
void Shift_Left(float arr[], float arr_1[], const unsigned int n, int shift)
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
	cout << "The INTEGER Array is shifted to the left by " << abs(shift) << " elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr_1[i] << "\t";
	}
}

void ShiftManager(int arr[ROWS][COLS], int arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	int shift;
	char e;
	do
	{
		cout << "Enter Shift from 1 to " << COLS - 1 << "\n";
		cout << "To shift the array to the right, enter a positive number" << endl;
		cout << "To shift the aray to the left, enter a negative namber" << endl;
		cin >> shift; cout << endl;
		shift >= 0 ?  Shift_Rigth(arr, arr_1, ROWS, COLS, shift) : Shift_Left(arr, arr_1, ROWS, COLS, shift);
		cout << "\n\n To continue the shift, press any key, to continue the program, press Esc" << endl;
		e = _getch();
	} while (e != 27);
}
void Shift_Rigth(int arr[ROWS][COLS], int arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift)
{	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{			
			arr[i][j] = arr_1[i] [COLS - shift + j];
		}
		for (int j = shift; j < COLS; j++)
		{
			arr[i][j] = arr_1[i][j - shift];
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
	cout <<  PP " The INT 2D Array is shifted to the RIGTH by " << shift << " elements\n" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			cout << arr_1[i][j] << "\t";
		}
		cout << endl;
	}
}
void Shift_Left(int arr[ROWS][COLS], int arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS - abs(shift); j++)
		{
			arr[i][j] = arr_1[i][j + abs(shift)];
		}
		for (int j = COLS - abs(shift); j < COLS; j++)
		{
			arr[i][j] = arr_1[i][j - COLS + abs(shift)];
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
	cout << PP " The INT 2D Array is shifted to the LEFT by " << abs(shift) << " elements\n" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr_1[i][j] << "\t";
		}
		cout << endl;
	}
}

void ShiftManager(double arr[ROWS][COLS], double arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	int shift;
	char e;
	do
	{
		cout << "Enter Shift from 1 to " << COLS - 1 << "\n";
		cout << "To shift the array to the right, enter a positive number" << endl;
		cout << "To shift the aray to the left, enter a negative namber" << endl;
		cin >> shift; cout << endl;
		shift >= 0 ? Shift_Rigth(arr, arr_1, ROWS, COLS, shift) : Shift_Left(arr, arr_1, ROWS, COLS, shift);
		cout << "\n\n To continue the shift, press any key, to continue the program, press Esc" << endl;
		e = _getch();
	} while (e != 27);
}
void Shift_Rigth(double arr[ROWS][COLS], double arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			arr[i][j] = arr_1[i][COLS - shift + j];
		}
		for (int j = shift; j < COLS; j++)
		{
			arr[i][j] = arr_1[i][j - shift];
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
	cout << PP " The DOUBLE 2D Array is shifted to the RIGTH by " << shift << " elements\n" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr_1[i][j] << "\t";
		}
		cout << endl;
	}
}
void Shift_Left(double arr[ROWS][COLS], double arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS - abs(shift); j++)
		{
			arr[i][j] = arr_1[i][j + abs(shift)];
		}
		for (int j = COLS - abs(shift); j < COLS; j++)
		{
			arr[i][j] = arr_1[i][j - COLS + abs(shift)];
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
	cout << PP " The DOUBLE 2D Array is shifted to the LEFT by " << abs(shift) << " elements\n" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr_1[i][j] << "\t";
		}
		cout << endl;
	}
}

void ShiftManager(float arr[ROWS][COLS], float arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	int shift;
	char e;
	do
	{
		cout << "Enter Shift from 1 to " << COLS - 1 << "\n";
		cout << "To shift the array to the right, enter a positive number" << endl;
		cout << "To shift the aray to the left, enter a negative namber" << endl;
		cin >> shift; cout << endl;
		shift >= 0 ? Shift_Rigth(arr, arr_1, ROWS, COLS, shift) : Shift_Left(arr, arr_1, ROWS, COLS, shift);
		cout << "\n\n To continue the shift, press any key, to continue the program, press Esc" << endl;
		e = _getch();
	} while (e != 27);
}
void Shift_Rigth(float arr[ROWS][COLS], float arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			arr[i][j] = arr_1[i][COLS - shift + j];
		}
		for (int j = shift; j < COLS; j++)
		{
			arr[i][j] = arr_1[i][j - shift];
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
	cout << PP " The FLOAT 2D Array is shifted to the RIGTH by " << shift << " elements\n" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr_1[i][j] << "\t";
		}
		cout << endl;
	}
}
void Shift_Left(float arr[ROWS][COLS], float arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS - abs(shift); j++)
		{
			arr[i][j] = arr_1[i][j + abs(shift)];
		}
		for (int j = COLS - abs(shift); j < COLS; j++)
		{
			arr[i][j] = arr_1[i][j - COLS + abs(shift)];
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
	cout << PP " The FLOAT 2D Array is shifted to the LEFT by " << abs(shift) << " elements\n" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr_1[i][j] << "\t";
		}
		cout << endl;
	}
}