#pragma once
#include "Constants.h"

void ShiftManager(int arr[], int arr_1[], const unsigned int n);
void Shift_Rigth(int arr[], int arr_1[], const unsigned int n, int shift);
void Shift_Left(int arr[], int arr_1[], const unsigned int n, int shift);

void ShiftManager(double arr[], double arr_1[], const unsigned int n);
void Shift_Rigth(double arr[], double arr_1[], const unsigned int n, int shift);
void Shift_Left(double arr[], double arr_1[], const unsigned int n, int shift);

void ShiftManager(float arr[], float arr_1[], const unsigned int n);
void Shift_Rigth(float arr[], float arr_1[], const unsigned int n, int shift);
void Shift_Left(float arr[], float arr_1[], const unsigned int n, int shift);

void ShiftManager(int arr[ROWS][COLS], int arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void Shift_Rigth(int arr[ROWS][COLS], int arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);
void Shift_Left(int arr[ROWS][COLS], int arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);

void ShiftManager(double arr[ROWS][COLS], double arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void Shift_Rigth(double arr[ROWS][COLS], double arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);
void Shift_Left(double arr[ROWS][COLS], double arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);

void ShiftManager(float arr[ROWS][COLS], float arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void Shift_Rigth(float arr[ROWS][COLS], float arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);
void Shift_Left(float arr[ROWS][COLS], float arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);