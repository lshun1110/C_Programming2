/*
	���� 7-5 : �迭 ������ ���
*/

/*
	�迭�� ����(element) ��� �Ϲ� ������ ���� �Լ��� ����, ����, lvalue, rvalue �����Ӱ� ���δ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZIE 5

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int arr[ARR_SIZIE] = { 0 };
	int i;

	arr[0] = 5;
	arr[1] = arr[0] + 10;
	arr[2] = add(arr[0], arr[1]);
	printf("������ 2�� �Է��ϼ��� : ");
	(void)scanf("%d %d", &arr[3], &arr[4]);

	for (i = 0; i < ARR_SIZIE; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}