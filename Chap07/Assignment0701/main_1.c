#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0701();
void print_AS(int arr[], int size);
void Calculate_AS(int arr[], int d, int size);

int main()
{
	Assignment0701();
	return 0;
}

void Assignment0701()
{
	int arr[10] = { 0 };
	int d = 0;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("ù ��° �� : ");
	(void)scanf("%d", &arr[0]);

	printf("���� : ");
	(void)scanf("%d", &d);

	Calculate_AS(arr, d, size);
	print_AS(arr, size);
}

void Calculate_AS(int arr[],int d,int size)
{
	for (int i = 1; i < size; i++)
	{
		*(arr + i) = *(arr + i - 1) + d; // arr[i] = arr[i-1] + d
	}
	return;
}

void print_AS(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d��° �� : %d\n", i+1,arr[i]);
	}
	return;
}