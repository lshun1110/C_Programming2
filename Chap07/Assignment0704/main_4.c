#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0704();
int SearchMin_index(int* arr, int size);
int SearchMax_index(int* arr, int size);
int SearchMax_value(int* arr, int size);
int SearchMin_value(int* arr, int size);

int main()
{
	Assignment0704();
	return 0;
}

void Assignment0704()
{
	int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("ÃÖ´ñ°ª : ÀÎµ¦½º = %d °ª = %d\n", SearchMax_index(arr,size), SearchMax_value(arr, size));
	printf("ÃÖ¼Ú°ª : ÀÎµ¦½º = %d °ª = %d\n", SearchMin_index(arr,size), SearchMin_value(arr, size));
	return;
}

int SearchMax_value(int * arr, int size)
{
	int max = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

int SearchMin_value(int* arr, int size)
{
	int min = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

int SearchMax_index(int* arr, int size)
{
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > arr[index])
			index = i;
	}
	return index;
}

int SearchMin_index(int* arr, int size)
{
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < arr[index])
			index = i;
	}
	return index;
}