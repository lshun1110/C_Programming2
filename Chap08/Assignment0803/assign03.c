/*
	���ϸ�: assign03.c
	����: PA03, ������ ���� ����ؼ� ���� �����, �������ε� ����ϼ���.
	�ۼ���: �̽���
	��¥: 2025.9.22
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0803();
void print_int_array1(int* arr, int size);
void print_int_array2(int* arr, int size);

int main()
{
	Assignment0803();
	return 0;
}

void Assignment0803()
{
	int arr[10] = { 44,32,62,23,45,76,77,89,23,45 };
	int size = sizeof(arr) / sizeof(arr[0]);

	print_int_array1(arr, size);
	print_int_array2(arr, size);
}

void print_int_array1(int* arr, int size)
{
	for (int i = 0; i < size; i++, arr++)
		printf("%d ", *arr);
	printf("\n");
}

void print_int_array2(int* arr, int size)
{
	int *p = &arr[size - 1];
	for (int i = 0; i < size; i++, p--)
		printf("%d ", *p);
}