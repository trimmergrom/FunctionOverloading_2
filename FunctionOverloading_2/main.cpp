#include "Function.h"


int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &coord);

	const unsigned int n = 12;
	int arr[n];
	int arr_1[n];
	int minRand, maxRand;
	int i_arr_2[ROWS][COLS] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9,}
	};
	srand(3);
	cout << "Enter minRand"; cin >> minRand;
	cout << "\nEnter maxRand"; cin >> maxRand;
	ArrRand(arr, arr_1, n, minRand, maxRand);
	Print(arr, n);
	Print(i_arr_2, ROWS, COLS);
	ReversPrint(arr, n);
	cout << Summ(arr, n) << "\t\t\t\t\t\t\t\t Summa Array" << endl << endl;
	cout << Avg(Summ(arr, n), n) << "\t\t\t\t\t\t\t\t Arithmetic average of array elements" << endl << endl;
	cout << MaxValue(arr, n) << "\t\t\t\t\t\t\t\t max value of array elements" << endl << endl;
	cout << MinValue(arr, n) << "\t\t\t\t\t\t\t\t min value of array elements" << endl << endl;
	SortArr(arr, n);
	ShiftManager(arr, arr_1, n);



	return 0;
}