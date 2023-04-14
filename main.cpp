#include "asdfx.h"
#include "constants.h"
#include "Print.h"
#include "Print.cpp"
#include "Fillrand.h"
#include "Fillrand.cpp"
#include "mathematical.h"
#include "mathematical.cpp"
#include "Sort.h"
#include "Sort.cpp"
#include "Shift.h"
#include "Shift.cpp"
#include "Search.h"
#include "Search.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве:  " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Сортируем массив: " << endl;
	Sort(arr, n);
	Print(arr, n);
	UniqueRand(arr, n);
	cout << "уникальный массив" << endl;
	Print(arr, n);
	FillRand(arr, n);
	cout << "Заново заполним массив и подсчитаем повторения" << endl;
	Print(arr, n);
	Search(arr, n);

	//int number_of_shifts;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);

	//------------------------------------------------------------
	// Одномерные массивы

	//const int SIZE = 8;
	//double d_arr[SIZE];
	//FillRand(d_arr, SIZE);
	//Print(d_arr, SIZE);
	//cout << "сумма элементов: " << Sum(d_arr, SIZE) << endl;
	//cout << "среднее арифметическое элемнтов массива: " << Avg(d_arr, SIZE) << endl;
	//Print(d_arr, SIZE);
	//cout << "Минимальное значение в массиве:  " << minValueIn(d_arr, SIZE) << endl;
	//cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, SIZE) << endl;
	//Sort(d_arr, SIZE);
	//Print(d_arr, SIZE);
	//cout << endl;
	//int number_of_shifts;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(d_arr, SIZE, number_of_shifts);
	//Print(d_arr, SIZE);
	//shiftRight(d_arr, SIZE, number_of_shifts);
	//Print(d_arr, SIZE);

	//-------------------------------------------------------------
	//     двумерные массивы
	cout << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	cout << "Массив 2-у мерный" << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве:  " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Сортируем массив: " << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	int number_of_shifts = 2;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Влево " << number_of_shifts << " сдвига" << endl;
	Print(i_arr_2, ROWS, COLS);
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Вправо " << number_of_shifts << " сдвига" << endl;
	Print(i_arr_2, ROWS, COLS);
	UniqueRand(i_arr_2, ROWS, COLS);
	cout << "уникальный массив" << endl;
	Print(i_arr_2, ROWS, COLS);
	FillRand(i_arr_2, ROWS, COLS);
	cout << "Заново заполним массив и подсчитаем повторения" << endl;
	Print(i_arr_2, ROWS, COLS);
	Search(i_arr_2, ROWS, COLS);


}
