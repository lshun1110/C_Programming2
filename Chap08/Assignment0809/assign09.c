/*
	���ϸ�: assign09.c
	����: PA09, �� ũ�Ⱑ 5�� 2���� �迭�� ��� Ư�� ������ ä�� �������� �Ѵ�.
	�ۼ���: �̽���
	��¥: 2025.9.22
	����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0809(void);
void fill_2d_array(int (*arr)[5], int rows, int a);

int main()
{
    Assignment0809();
    return 0;
}

void Assignment0809(void)
{
    int arr[5][5] = { 0 };
    int rows = (int)(sizeof(arr) / sizeof(arr[0]));
    int a = 0;

    printf("�迭�� ���ҿ� ������ ��? ");
    scanf("%d", &a);

    fill_2d_array(arr, rows, a); 
}

void fill_2d_array(int (*arr)[5], int rows, int a)
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {  
            arr[i][j] = a;
        }
    }

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}