/*
	���ϸ�: assign06.c
	����: PA06, ���� �迭 �ִ� �ּҸ� ���ϴ� �Լ��� ������ ����ϼ���.
	�ۼ���: �̽���
	��¥: 2025.9.22
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0806();
void get_min_max(const int* arr, int size, int* min, int* max);

int main()
{
	Assignment0806();
	return 0;
}

void Assignment0806()
{
	int arr[10] = {50,30,20,60,80,10,90,40,70,100};
	int size = sizeof(arr) / sizeof(arr[0]);
	int mn, mx;
	get_min_max(arr, size , &mn, &mx);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("�ִ밪 : %d, �ּڰ� : %d", mx, mn);
}

void get_min_max(const int* arr, int size, int* min, int* max) 
{
	int mn = arr[0], mx = arr[0];

	for (int i = 1; i < size; i++) {
		if (arr[i] < mn) mn = arr[i];
		if (arr[i] > mx) mx = arr[i];
	}

	*min = mn;
	*max = mx;
}