#include "Search.h"

template <typename T> void Search(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

		bool examination = false;
		//��������� ����������� �� �����
		for (int k = 0; k < i; k++)
		{
			if (arr[i] == arr[k])
			{
				examination = true; //���������� �������� ���� ����� ���� �����
				break; // ��������� ������� ���� ,��� ��� �������� ��� �����������
			}
		}
		if (examination)continue; // ��������� ������ ������� �������� � �������� �� ���������
		int counter = 0;
		for (int k = i + 1; k < n; k++)
		{
			if (arr[i] == arr[k])counter++;
		}
		if (counter)cout << "����� " << arr[i] << " ����������� " << counter << " ���" << endl;
	}
}
template <typename T> void Search(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool examination = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					//cout << arr[i][j] << " " << arr[k][l] << " ";
					if (arr[i][j] == arr[k][l])
					{
						examination = true;
						//cout << "break work" << endl;
						break;
					}
					//if (examination) cout << "������ ���������� ����" << endl;    //�� ������ ����� break � ����� ������������, ��������� ���-�� ������ ��������
					if (examination) break;
				}
			}
			if (examination) continue;
			//cout << "�������" << endl;
			int counter = 0;
			for (int k = i; k < ROWS; k++)
			{
				//cout << "� �����" << endl;
				for (int l = (k == i ? (j + 1) : 0); l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l]) counter++;
				}
			}
			if (counter)cout << "����� " << arr[i][j] << " ����������� " << counter << " ����" << endl;
		}
	}
}