/*
	���ϸ�: assign08.c
	����: PA08, ������ �迭�� Ư�� ������ ä��� fill_array �Լ��� �ۼ��ض�. �����Ϳ� �������� �Ἥ
				�迭�� ����϶�.
	�ۼ���: �̽���
	��¥: 2025.9.22
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0808();
void fill_array(int* arr, int size, int a);

int main()
{
	Assignment0808();
	return 0;
}

void Assignment0808()
{
	int arr[20] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int a = 0;

	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d",&a );

	fill_array(arr, size,a);
}

void fill_array(int *arr,int size,int a)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = a;
	}
	printf("�迭 : ");
	for (int i = 0; i < size; i++)
		printf("%d ",arr[i]);
}