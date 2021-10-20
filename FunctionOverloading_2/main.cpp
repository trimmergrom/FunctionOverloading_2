#include "stdafx.h"
#include "Shift.h"
#include "Constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"

#define PPP "\t\t\t\t\t\t\t\t"

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &coord);

	const unsigned int n = 12;
	int minRand, maxRand;
	int arr[n], arr_1[n];
	int arr_CH[n], arr1_CH[n];
	double arr_DB[n], arr1_DB[n];
	float arr_FL[n], arr1_FL[n];
	int arr_2[ROWS][COLS], arr1_2[ROWS][COLS];
	char arr_2CH[ROWS][COLS] ;
	double arr_2DB[ROWS][COLS], arr1_2DB[ROWS][COLS];
	float arr_2FL[ROWS][COLS], arr1_2FL[ROWS][COLS];
	srand(5);
	cout << "Enter minRand\t"; cin >> minRand;
	cout << "Enter maxRand\t"; cin >> maxRand; cout << endl;

	ArrRand(arr, arr_1, n, minRand, maxRand);
	Print(arr, n); cout <<  "\t Parent INTGER Array" << endl << endl;
	ReversPrint(arr, n); cout << "\t Revers INTGER Array" << endl << endl;
	SortArr(arr, n); cout << "\t The INTGER Array is sorted in ascending order" << endl << endl;
	cout << Summ(arr, n) << PPP " Summa INTGER Array" << endl << endl;
	cout << Avg(Summ(arr, n), n) << PPP " Arithmetic average of INTGER array elements" << endl << endl;
	cout << MaxValue(arr, n) << PPP " max value of INTGER array elements" << endl << endl;
	cout << MinValue(arr, n) << PPP " min value of INTGER array elements" << endl << endl;
	/*ShiftManager(arr, arr_1, n);*/
	cout <<  "=========================================================================================================================="  << endl;

	ArrRand(arr_CH, arr1_CH, n);
	Print1(arr_CH, n); cout << "\t Parent CHAR Array" << endl << endl;
	ReversPrint1(arr_CH, n); cout << "\t Revers CHAR Array" << endl;
	cout <<  "=========================================================================================================================="  << endl;	

	ArrRand(arr_DB, arr1_DB, n, minRand, maxRand);
	Print(arr_DB, n); cout << "\t Parent DOUBLE Array" << endl << endl;
	ReversPrint(arr_DB, n); cout << "\t Revers DOUBLE Array" << endl << endl;
	SortArr(arr_DB, n); cout << "\t The DOUBLE Array is sorted in ascending order" << endl << endl;
	cout << Summ(arr_DB, n) << PPP " Summa DOUBLE Array" << endl << endl;
	cout << Avg(Summ(arr_DB, n), n) << PPP " Arithmetic average of DOUBLE array elements" << endl << endl;
	cout << MaxValue(arr_DB, n) << PPP " max value of DOUBLE array elements" << endl << endl;
	cout << MinValue(arr_DB, n) << PPP " min value of DOUBLE array elements" << endl;
	/*ShiftManager(arr_DB, arr1_DB, n);*/
	cout <<  "=========================================================================================================================="  << endl;

	ArrRand(arr_FL, n, minRand, maxRand);
	Print(arr_FL, n); cout << "\t Parent FLOAT Array" << endl << endl;
	ReversPrint(arr_FL, n); cout << "\t Revers FLOAT Array" << endl << endl;
	SortArr(arr_FL, n); cout << "\t The FLOAT Array is sorted in ascending order" << endl << endl;
	cout << Summ(arr_FL, n) << PPP " Summa FLOAT Array" << endl << endl;
	cout << Avg(Summ(arr_FL, n), n) << PPP " Arithmetic average of FLOAT array elements" << endl << endl;
	cout << MaxValue(arr_FL, n) << PPP " max value of FLOAT array elements" << endl << endl;
	cout << MinValue(arr_FL, n) << PPP " min value of FLOAT array elements" << endl;
	/*ShiftManager(arr_FL, arr1_FL, n);*/
	cout <<  "=========================================================================================================================="  << endl;

	ArrRand(arr_2, ROWS, COLS);
	Print(arr_2, ROWS, COLS); cout << PPP " Parent INTGER 2D Array" << endl << endl;
	ReversPrint(arr_2, ROWS, COLS); cout << PPP " Revers INTGER 2D Array" << endl << endl;
	SortArr(arr_2, ROWS, COLS); cout << PPP " The INTGER 2D Array is sorted in ascending order" << endl << endl;
	cout << Summ(arr_2, ROWS, COLS) << PPP " Summa INTGER 2D Array" << endl << endl;
	cout << Avg(Summ(arr_2, ROWS, COLS), ROWS, COLS) << PPP " Arithmetic average of INTGER 2D Array elements" << endl << endl;
	cout << MaxValue(arr_2, ROWS, COLS) << PPP " max value of INTGER 2D Array elements" << endl << endl;
	cout << MinValue(arr_2, ROWS, COLS) << PPP " min value of INTGER 2D Array elements" << endl;
	/*ShiftManager(arr_2, arr1_2, ROWS, COLS);*/

	cout << "==========================================================================================================================" << endl;

	ArrRand(arr_2CH, ROWS, COLS);
	Print(arr_2CH, ROWS, COLS); cout << PPP " Parent CHAR 2D Array" << endl;
	cout << "==========================================================================================================================" << endl;

	ArrRand(arr_2DB, ROWS, COLS, minRand, maxRand);
	Print(arr_2DB, ROWS, COLS); cout << PPP " Parent DOUBLE 2D Array" << endl << endl;
	ReversPrint(arr_2DB, ROWS, COLS); cout << PPP " Revers DOUBLE 2D Array" << endl << endl;
	SortArr(arr_2DB, ROWS, COLS); cout << PPP " The DOUBLE 2D Array is sorted in ascending order" << endl << endl;
	cout << Summ(arr_2DB, ROWS, COLS) << PPP " Summa DOUBLE 2D Array" << endl << endl;
	cout << Avg(Summ(arr_2DB, ROWS, COLS), ROWS, COLS) << PPP " Arithmetic average of DOUBLE 2D Array elements" << endl << endl;
	cout << MaxValue(arr_2DB, ROWS, COLS) << PPP " max value of DOUBLE 2D Array elements" << endl << endl;
	cout << MinValue(arr_2DB, ROWS, COLS) << PPP " min value of DOUBLE 2D Array elements" << endl;
	/*ShiftManager(arr_2DB, arr1_2DB, ROWS, COLS);*/
	cout << "==========================================================================================================================" << endl;	

	ArrRand(arr_2FL, ROWS, COLS, minRand, maxRand);
	Print(arr_2FL, ROWS, COLS); cout << PPP " Parent FLOAT Array" << endl << endl;
	ReversPrint(arr_2FL, ROWS, COLS); cout << PPP " Revers FLOAT 2D Array" << endl << endl;
	SortArr(arr_2FL, ROWS, COLS); cout << PPP " The FLOAT 2D Array is sorted in ascending order" << endl << endl;
	cout << Summ(arr_2FL, ROWS, COLS) << PPP " Summa FLOAT 2D Array" << endl << endl;
	cout << Avg(Summ(arr_2FL, ROWS, COLS), ROWS, COLS) << PPP " Arithmetic average of FLOAT 2D Array elements" << endl << endl;
	cout << MaxValue(arr_2FL, ROWS, COLS) << PPP " max value of FLOAT 2D Array elements" << endl << endl;
	cout << MinValue(arr_2FL, ROWS, COLS) << PPP " min value of FLOAT 2D Array elements" << endl << endl;
	/*ShiftManager(arr_2FL, arr1_2FL, ROWS, COLS);*/
	cout << "==========================================================================================================================" << endl;
	return 0;
}