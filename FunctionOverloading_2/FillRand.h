#pragma once
#include "Constants.h"

void ArrRand(int arr[], int arr_1[], const unsigned int n, int minRand, int maxRand);
void ArrRand(int arr[], int arr_1[], const unsigned int n);
void ArrRand(double arr[], double arr_1[], const unsigned int n, int minRand, int maxRand);
void ArrRand(float arr[], float arr_1[], const unsigned int n, int minRand, int maxRand);
void ArrRand(int arr[ROWS][COLS], int arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void ArrRand(char arr[ROWS][COLS], char arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void ArrRand(double arr[ROWS][COLS], double arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand);
void ArrRand(float arr[ROWS][COLS], float arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand);