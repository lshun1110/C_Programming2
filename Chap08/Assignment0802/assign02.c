/*
	���ϸ�: assign02.c
	����: PA02, �迭�� ���� ����Ű�� �����Ϳ� ������ ������ �̿��ؼ� �Ǽ��� �迭�� ��� ���Ҹ�
			����ϴ� ���α׷��� �ۼ��Ͻÿ�. ũ��� 10�̸�, ���� �˾Ƽ� ���ϰ� ����Ѵ�.
	�ۼ���: �̽���
	��¥: 2025.9.22
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0802();
void print_float_array(float* arr, int size);

int main()
{
	Assignment0802();
	return 0;
}

void Assignment0802()
{
	float arr[10] = { 1.0 ,2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0,9.0, 10.0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	print_float_array(arr, size);
}

void print_float_array(float * arr, int size)
{
	for (int i = 0; i < size; i++, arr++)
		printf("%.2f ", *arr);
}