/*
	���� 7-12 : 2���� �迭�� ���� �� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 2 

int main()
{
	int data[ROW][COL];
	int i, j, k;

	for (i = 0, k = 0; i < ROW; i++) //  �� �ε����� ������Ų��.
		for (j = 0; j < COL; j++) // �� �ε����� �߰���Ų��.
			data[i][j] = ++k; // �迭�� ���ҿ� 0���� 1�� Ŀ���� ���� �����Ѵ�.

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%3d ", data[i][j]);
		printf("\n"); // �ึ�� �ٹٲ� ���ڸ� ����Ѵ�.
	}
		
	printf("sizeof(data) = %lld\n", sizeof(data));
	printf("sizeof(data[0]) = %lld\n", sizeof(data[0]));
	printf("sizeof(data[0][0]) = %lld\n", sizeof(data[0][0]));
	return 0;
}