/*
	파일명: assign09.c
	내용: PA09, 열 크기가 5인 2차원 배열을 모두 특정 값으로 채워 넣으려고 한다.
	작성자: 이승훈
	날짜: 2025.9.22
	버전: v1.0
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

    printf("배열의 원소에 저장할 값? ");
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