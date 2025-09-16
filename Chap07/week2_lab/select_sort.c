#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int findMinInt(int R[], int from, int to);
void swapInt(int R[], int aindex, int bindex);
int selectionSortInt(int R[], int length);

int main()
{
	int a, b;
	int arr[5] = {0,2,1,4,3};
	printf("�ε��� ��ȣ a ���� b ���� �� ���� �ε��� ���\n");
	(void)scanf("%d %d", &a, &b);
	printf("���� ���� �ε��� : %d\n", findMinInt(arr, a, b));

	printf("a �ε����� b �ε����� �� ����\n");
	(void)scanf("%d %d", &a, &b);
	swapInt(arr, a, b);
	printf("�ٲ� �� : %d %d ", arr[a], arr[b]);

	printf("���� ���� ����\n");
	if (selectionSortInt(arr, 5) == 0)
	{
		printf("���� ����");
		for (int i = 0; i < 5; i++)
			printf("%d ", arr[i]);
	}
	else
	{
		printf("���� ����");
	}
		
	return 0;
}

int findMinInt(int R[], int from, int to)
{
	int min = R[from];
	int index = from;
	for (int i = from + 1; i < to; i++)
	{
		if (min > R[i])
		{
			min = R[i];
			index = i;
		}
	}
	return index;
}

void swapInt(int R[], int aindex, int bindex)
{
	int temp;
	temp = R[aindex];
	R[aindex] = R[bindex];
	R[bindex] = temp;
	return;
}

int selectionSortInt(int R[], int length)
{
	for (int i = 0; i < length -1; i++)
		swapInt(R, i, findMinInt(R, i, length));

	for (int i = 0; i < length -1; i++)
	{
		if (R[i] > R[i + 1])
			return -1;
	}
	
	return 0;
}