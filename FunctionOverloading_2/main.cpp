#include "Function.h"
#include "stdafx.h"
#include "Constants.h"
#include "FillRand.h"
#include "Print.h"

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &coord);

	const unsigned int n = 12;
	int minRand, maxRand;
	int arr[n];
	int arr_1[n];
	//char arr[n];
	//double arr[n];
	//float arr[n];
	int arr_2[ROWS][COLS];
	//char arr_2[ROWS][COLS];
	//double arr_2[ROWS][COLS];
	//float arr_2[ROWS][COLS];
	srand(3);
	cout << "Enter minRand\t"; cin >> minRand;
	cout << "Enter maxRand\t"; cin >> maxRand; cout << endl;
	ArrRand(arr, arr_1, n, minRand, maxRand);
	Print(arr, n);
	cout << "\t Parent INT Array" << endl << endl;
	ArrRand(arr_2, ROWS, COLS);
	Print(arr_2, ROWS, COLS);
	ReversPrint(arr, n);
	cout << Summ(arr, n) << "\t\t\t\t\t\t\t\t Summa Array" << endl << endl;
	cout << Avg(Summ(arr, n), n) << "\t\t\t\t\t\t\t\t Arithmetic average of array elements" << endl << endl;
	cout << MaxValue(arr, n) << "\t\t\t\t\t\t\t\t max value of array elements" << endl << endl;
	cout << MinValue(arr, n) << "\t\t\t\t\t\t\t\t min value of array elements" << endl << endl;
	SortArr(arr, n);
	ShiftManager(arr, arr_1, n);



	return 0;
}