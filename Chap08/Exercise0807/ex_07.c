/*
	���� 8-7 : �迭�� 0�� ���Ҹ� ����Ű�� �����Ϳ� '������ + ����' ������ ���
*/

#include <stdio.h>

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* p = &arr[0];   // arr[0]�� �ּҸ� p�� ������ �� �ִ�.

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("p + %d = %p, ", i, p + i); // arr[i]�� �ּҸ� ���
        printf("*(p + %d) = %d\n", i, *(p + i));  // arr[i]�� ���
    }

    return 0;
}