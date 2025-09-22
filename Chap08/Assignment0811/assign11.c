/*
    ���ϸ�: assign11.c
    ����: PA11, ���簢�� �ѷ��� ���ϴ� get_rect_info �Լ� �ۼ��ϼ��� �Լ� �̿��ؼ�
          ���̿� �ѷ��� ���ϼ���.
    �ۼ���: �̽���
    ��¥: 2025.9.22
    ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0811();
void get_rect_info(int width, int height, int* area, int* perimeter);

int main() 
{
    Assignment0811();
    return 0;
}

void get_rect_info(int width, int height, int* area, int* perimeter) 
{
    *area = width * height;
    *perimeter = 2 * (width + height);
}

void Assignment0811() 
{
    int w, h, a, p;

    printf("����? ");
    scanf("%d", &w);

    printf("����? ");
    scanf("%d", &h);

    get_rect_info(w, h, &a, &p);

    printf("����: %d, �ѷ�: %d\n", a, p);
}