/*
	���ϸ�: assign05.c
	����: PA05, ���� ���� �����ϼ��� arith_seq�� �Լ��� �Ű������� �迭�� �迭 ũ�� �����̴�.
	�ۼ���: �̽���
	��¥: 2025.9.22
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0805();
void arith_seq(int* arr, int size, int a, int d);

int main()
{
	Assignment0805();
	return 0;
}

void Assignment0805()
{
	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int a, d;

	printf("ù ��° �� ? ");
	scanf("%d", &a);

	printf("���� ? ");
	scanf("%d", &d);

	arith_seq(arr, size, a, d);
}

void arith_seq(int* arr, int size,int a, int d)
{
	printf("���� ���� : ");
	arr[0] = a;
	for (int i = 0; i < size - 1; i++)
		arr[i + 1] = arr[i] + d;
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
		
}