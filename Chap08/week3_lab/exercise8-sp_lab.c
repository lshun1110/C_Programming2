#include <stdio.h>

void print_int_array();
void printArrayInt2(const int* arr, int size);
void printArrayInt1(const int* arr, int size);
void print_float_array();
int copyArrayFloat(const float* from, float* to, int size);

int main()
{
	//print_int_array();
	print_float_array();

	return 0;
}

void print_int_array()
{
	int arr[] = { 10,20,30,40,50,60,70,80,90,100 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printArrayInt1(arr, size);
	printArrayInt2(arr, size);
}

void print_float_array()
{
	float arr[5] = {1,2,3,4,5};
	float c_arr[5] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	if (copyArrayFloat(arr, c_arr, size) == size)
		printf("%d ���� ī�� ���� ",size);
	else
		printf("ī�� ����");

	for (int i = 0; i < size; i++)
		printf("%f ", c_arr[i]);
}

//��� :1���� ���� �迭�� �Է� �޾� �ֿܼ� ����Ѵ�.
//�Լ��� : printArrayInt1
//�Է� : int Ÿ�� 1���� �迭 �ּҿ� �� ũ��
//��� : �͹̳ο� �迭�� ������ ���ڰ� ���
//��ȯ : ����

void printArrayInt2(const int* arr, int size)
{
	if (arr == NULL)
		return;

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}

void printArrayInt1(const int* arr, int size)
{
	if (arr == NULL)
		return;

	for (int i = 0; i < size; i++, arr++)
	{
		printf("%d ", *arr);
	}
	printf("\n");
	return;
}

/*
	������++�����ڸ��̿��Ͽ������ϰ��׽�Ʈ
	��ȯ: size
	�� �����͵��� NULL����Ȯ���Ұ�
*/

int copyArrayFloat(const float* from, float* to, int size)
{
	if (from == NULL || to == NULL)
		return -1;

	for (int i = 0; i < size; i++)
	{
		*(to + i) = *(from + i);
	}
	return size;
}