/*
	���ϸ�: assign04.c
	����: PA04, �迭 ���� ����Ű�� ������ Ȱ���ؼ� �Ǽ� �迭 ��� ���ϴ� �ڵ� �ۼ��ϼ���.
	�ۼ���: �̽���
	��¥: 2025.9.22
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0804();
float calculate_arr(float* arr, int size);

int main()
{
	Assignment0804();
	return 0;
}

void Assignment0804()
{
	float arr[10] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("��� : %f", calculate_arr(arr, size));
}

float calculate_arr(float * arr, int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++, arr++)
		sum += *arr;
	return sum / (float) size;
}