/*
	���� 7-4 : �迭�� ũ�⺸�� �ʱⰪ�� ���� �����ϴ� ���
*/

#include <stdio.h>
/*
	�Ǽ� �迭�� �����Ϸ��� �ڵ� �Ҵ� �϶�� �� ������ŭ �Ҵ����ش�.
	���� �迭�� �Է½� null-terminate 0 ���Ṯ�ڰ� ���� ���� ������ �׻� �迭 ���� + 1 �̴�.
*/
int main()
{
	int amount[5] = { 1,1,5 };
	int price[5] = { 0 };
	int i;

	printf("amount = ");
	for (i = 0; i < 5; i++)
		printf("%d ", amount[i]);
	printf("\n");

	printf("price = ");
	for (i = 0; i < 5; i++)
		printf("%d ",price[i]);
	printf("\n");

	return 0;
}