// �⺻������ lab_cmp ������ is_equal�� ������ �Լ��� ������� �������鼭 �Լ��� ��ȯ���� ������ ��

#include <stdio.h>

#define Max_arr 5

int main()
{
	int x[Max_arr] = { 1,2,3,4,5 };
	int y[Max_arr] = { 1,2,3,4,5 };

	int i;
	int is_equal = 1;

	int size = sizeof(x) / sizeof(x[0]);

	if (x == y)
		printf("�� �迭�� �ּҰ� �����ϴ�.\n");

	if (isEqualArrayInt(x, y ,size) == 1)
		printf("�� �迭�� �����ϴ�.");

	return 0;
}

int isEqualArrayInt(int* a, int* b, int size)
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