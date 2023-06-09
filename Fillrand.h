#pragma once
#include "constants.h"
#include "asdfx.h"

template <typename T> void FillRand(T arr[], const int n);
void FillRand(double arr[], const int n);
template <typename T> void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> void UniqueRand(T arr[], const int n);
void UniqueRand(double arr[], const int n);
template <typename T> void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);