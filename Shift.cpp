#include "Shift.h"

template <typename T> void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template <typename T> void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (i == COLS - 1 && j != ROWS)
				{
					arr[i][j] = arr[i + 1][0];
				}
				else
				{
					arr[i][j] = arr[i][j + 1];
				}
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

template <typename T> void shiftRight(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}

	//shiftLeft(arr, n, n - number_of_shifts);
}
template <typename T> void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int b = 0; b < number_of_shifts; b++)
	{
		T buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i > -1; i--)
		{
			for (int j = COLS - 1; j > -1; j--)
			{
				if (j == 0 && i != 0)
				{
					arr[i][j] = arr[i - 1][COLS - 1];
				}
				else
				{
					arr[i][j] = arr[i][j - 1];
				}
			}
		}
		arr[0][0] = buffer;
	}
}