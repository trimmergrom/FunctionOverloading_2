#pragma once
#include "Constants.h"



int Summ(int arr[], const unsigned int n);
double Avg(int summ, const unsigned int n);
int MaxValue(int arr[], const unsigned int n);
int MinValue(int arr[], const unsigned int n);
void SortArr(int arr[], const unsigned int n);
void ShiftManager(int arr[], int arr_1[], const unsigned int n);
void Shift_Rigth(int arr[], int arr_1[], const unsigned int n, int shift);
void Shift_Left(int arr[], int arr_1[], const unsigned int n, int shift);