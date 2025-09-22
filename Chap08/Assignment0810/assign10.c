/*
	���ϸ�: assign10.c
	����: PA10, 3 x 3 ��� ���� ���ϴ� add_matrix �Լ��� �ۼ��Ͻÿ�.
	�ۼ���: �̽���
	��¥: 2025.9.22
	����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0810();
void add_matrix(const int x[][3], const int y[][3], int out[][3], int rows);
void print_matrix(const int a[][3], int rows, const char* label);

int main() 
{
    Assignment0810();
    return 0;
}

void Assignment0810()
{
    int x[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    int y[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int z[3][3] = { 0 };

    int rows = (int)(sizeof(x) / sizeof(x[0]));

    add_matrix(x, y, z, rows);

    print_matrix(x, rows, "x ���: \n");
    print_matrix(y, rows, "y ���: \n");
    print_matrix(z, rows, "x + y ���: \n");
}

void add_matrix(const int x[][3], const int y[][3], int out[][3], int rows)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < 3; j++)
            out[i][j] = x[i][j] + y[i][j];
}

void print_matrix(const int a[][3], int rows, const char* label) 
{
    if (label && *label) 
        printf("%s", label);
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (j == 2) 
                printf("%d \n", a[i][j]);
            else        
                printf("%d ", a[i][j]);
        }
    }
}
