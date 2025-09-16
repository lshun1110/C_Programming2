// �⺻������ lab_cmp ������ is_equal�� ������ �Լ��� ������� �������鼭 �Լ��� ��ȯ���� ������ ��

#include <stdio.h>

#define Max_arr 5

int isEqualArrayInt(int* a, int* b, int size);

int main()
{
	int a[Max_arr] = { 1,2,3,4,5 };
	int b[Max_arr] = { 1,2,3,4,5 };
	int size = sizeof(a) / sizeof(a[0]);

	if (isEqualArrayInt(a, b, size) == 1)
		printf("�� �迭�� �����ϴ�.");

	return 0;
}

int isEqualArrayInt(int * a, int * b, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] != b[i])
		{
			return 0;
		}
	}
	return 1;
}