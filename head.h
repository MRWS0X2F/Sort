#pragma once
#include<iostream>		
#include<ctime>
using namespace std;

//������Ҫ����
int* low, * high, tmp = 0, choose, * num;
int Array[50] = { };

//����ȫ�ֺ���

//����ʽ���Ӵ�С
void From_max_to_min();	
//����ʽ����С����
void From_min_to_max();	
//���������
void rand_nums();							

void rand_nums()
{
	srand((unsigned int)time(NULL));
	for (int times = 0; times <= 49;times++)
	{
		num = &Array[times];
		*num = rand()%100+1;
		Array[times] = *num;
	}
	
}

void From_max_to_min()
{
	system("cls");
	for (int min = 0; min <= sizeof(Array) / 4 - 1; min++)
	{
		low = &Array[min];
		if (*low == 0){
			break;}
		for (int max = sizeof(Array) / 4 - 1; max >= 0; max--){
			high = &Array[max];
			if (*high > *low){
				tmp = *low;
				*low = *high;
				*high = tmp;
			}/*else if (*high == *low) {			//�������ò�ƻ�������⣨��ͬ������ʧЧ��
				break;}*/
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
		for (int max = sizeof(Array) / 4 - 1; max >= 0; max--){
			high = &Array[max];
			if (*high < *low){
				tmp = *low;
				*low = *high;
				*high = tmp;
			}/*else if (*high == *low){
				break;}*/
		}
	}

	for (int put_out : Array)
	{
		cout << put_out << endl;
	}
}
