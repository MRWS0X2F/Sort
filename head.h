#pragma once
#include<iostream>						
using namespace std;

//������Ҫ����
int* low, * high, tmp = 0, choose;
int Array[] = { 58,14,79,45,13,1,48,72,98,5,9 };

//����ȫ�ֺ���
void From_max_to_min();						//����ʽ���Ӵ�С
void From_min_to_max();						//����ʽ����С����

void From_max_to_min()
{
	system("cls");
	for (int min = 0; min <= sizeof(Array) / 4 - 1; min++)
	{
		low = &Array[min];
		for (int max = sizeof(Array) / 4 - 1; max >= 0; max--)
		{
			high = &Array[max];
			if (*high > *low)
			{
				tmp = *low;
				*low = *high;
				*high = tmp;
			}
			else if (*high == *low)
			{
				break;
			}
		}
	}

	for (int put_out : Array)
	{
		cout << put_out << endl;
	}
}

void From_min_to_max()
{
	system("cls");
	for (int min = 0; min <= sizeof(Array) / 4 - 1; min++)
	{
		low = &Array[min];
		for (int max = sizeof(Array) / 4 - 1; max >= 0; max--)
		{
			high = &Array[max];
			if (*high < *low)
			{
				tmp = *low;
				*low = *high;
				*high = tmp;
			}
			else if (*high == *low)
			{
				break;
			}
		}
	}

	for (int put_out : Array)
	{
		cout << put_out << endl;
	}
}
