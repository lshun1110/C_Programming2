/* 
	���ϸ�: assign01.c
	����: PA01, ũ�Ⱑ 3�� double �迭 ��� ������ �ּҸ� ����ϼ���. (��, �ּұ��ϱ� �����ڴ� �������������)
	�ۼ���: �̽���
	��¥: 2025.9.22
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0801();

int main()
{
	Assignment0801();
	return 0;
}

void Assignment0801()
{
	int arr[20];
	for (int i = 0; i < 3; i++)
		printf("x[%d]�� �ּ� : %p\n",i,arr + i);
}