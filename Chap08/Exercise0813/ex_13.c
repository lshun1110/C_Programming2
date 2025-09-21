/*
	���� 8-13 : �����Ϳ� ���� ���� ������� ������ swap �Լ�
*/

#include <stdio.h>

void swap(int* x, int* y);

int main()
{
    int a = 3, b = 7;

    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);  // �����Ϳ� ���� ����
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int* x, int* y) // x,y�� ������ �ּ��̴�.
{
    int temp = *x; // x�� ����Ű�� ������ ���� temp�� �����Ѵ�.
    *x = *y; // y�� ����Ű�� ������ ���� x�� ����Ű�� ������ �����Ѵ�.
    *y = temp; // temp�� y�� ����Ű�� ������ �����Ѵ�.
}