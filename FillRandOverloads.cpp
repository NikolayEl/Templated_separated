#include"Fillrand.h"

void FillRand(double arr[], const int n)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		arr[i] /= 10;
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (ROWS * COLS);
			arr[i][j] /= 10;
		}
	}
}

void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		arr[i] /= 10;

		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}

void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (ROWS * COLS);
			arr[i][j] /= 10;
			bool examination = false;
			//cout << "Сейчас j = " << j << endl; //проверка нумерации j
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						examination = true;
						j--;
						//cout << "Повтор" << arr[k][l] << endl; //проверка сработки
						break;
					}
				}
				if (examination)break;
			}
			//cout << "Потом j = " << j << endl; //проверка нумерации j

		}
	}
}