/*
	���ϸ�: assign07.c
	����: PA07, �Ǽ��� �迭�� ������ reverse_array �Լ��� �ۼ��ϰ� �̸� Ȯ���϶�.
	�ۼ���: �̽���
	��¥: 2025.9.22
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0807();
void reverse_array(float* arr, int size);

int main()
{
	Assignment0807();
	return 0;
}

void Assignment0807()
{
	float arr[10] = { 0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0, };
	int size = sizeof(arr) / sizeof(arr[0]);

	float* p = &arr[9];
	reverse_array(p, size);

}

void reverse_array(float * arr, int size)
{
	for (int i = 0; i < size; i++, arr--)
		printf("%.2f ", *arr);
}