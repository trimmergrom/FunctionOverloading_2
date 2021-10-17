#pragma once
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
using namespace std;

const unsigned int ROWS = 5;
const unsigned int COLS = 5;

void ArrRand(int arr[], int arr_1[], const unsigned int n, int minRand, int maxRand);
void ArrRand(double arr[], int arr_1[], const unsigned int n, int minRand, int maxRand);
void Print(int arr[], const unsigned int n);
void Print(double arr[], const unsigned int n);
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void ReversPrint(int arr[], const unsigned n);
int Summ(int arr[], const unsigned int n);
double Avg(int summ, const unsigned int n);
int MaxValue(int arr[], const unsigned int n);
int MinValue(int arr[], const unsigned int n);
void SortArr(int arr[], const unsigned int n);
void ShiftManager(int arr[], int arr_1[], const unsigned int n);
void Shift_Rigth(int arr[], int arr_1[], const unsigned int n, int shift);
void Shift_Left(int arr[], int arr_1[], const unsigned int n, int shift);