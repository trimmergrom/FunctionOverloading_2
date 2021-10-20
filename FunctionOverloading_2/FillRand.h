#pragma once
#include "Constants.h"

void ArrRand(int arr[], int arr_1[], const unsigned int n, int minRand, int maxRand);
void ArrRand(int arr[], int arr_1[], const unsigned int n);
void ArrRand(double arr[], double arr1_DB[], const unsigned int n, int minRand, int maxRand);
void ArrRand(float arr[], const unsigned int n, int minRand, int maxRand);
void ArrRand(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void ArrRand(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void ArrRand(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand);
void ArrRand(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand);