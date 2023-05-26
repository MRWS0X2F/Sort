#pragma once
#include<iostream>		
#include<ctime>
using namespace std;

//声明必要变量
int* low, * high, tmp = 0, choose, * num;
int Array[50] = { };

//创建全局函数

//排序方式：从大到小
void From_max_to_min();	
//排序方式：从小到大
void From_min_to_max();	
//生成随机数
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
			}/*else if (*high == *low) {			//这个代码貌似会出现问题（相同数排序失效）
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
