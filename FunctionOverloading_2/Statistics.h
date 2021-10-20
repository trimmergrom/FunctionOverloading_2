#pragma once
#include "Constants.h"

int Summ(int arr[], const unsigned int n);
double Summ(double arr[], const unsigned int n);
float Summ(float arr[], const unsigned int n);
double Summ(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
double Summ(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
float Summ(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
double Avg(int summ, const unsigned int n);
double Avg(double summ, const unsigned int n);
float Avg(float summ, const unsigned int n);
double Avg(double summ, const unsigned int ROWS, const unsigned int COLS);
float Avg(float summ, const unsigned int ROWS, const unsigned int COLS);
int MaxValue(int arr[], const unsigned int n);
double MaxValue(double arr[], const unsigned int n);
float MaxValue(float arr[], const unsigned int n);
int MinValue(int arr[], const unsigned int n);
double MinValue(double arr[], const unsigned int n);
float MinValue(float arr[], const unsigned int n);
int MaxValue(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
int MinValue(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
double MaxValue(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
double MinValue(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
float MaxValue(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
float MinValue(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);