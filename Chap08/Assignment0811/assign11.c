/*
    파일명: assign11.c
    내용: PA11, 직사각형 둘레를 구하는 get_rect_info 함수 작성하세요 함수 이용해서
          넓이와 둘레를 구하세요.
    작성자: 이승훈
    날짜: 2025.9.22
    버전: v1.0
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

    printf("가로? ");
    scanf("%d", &w);

    printf("세로? ");
    scanf("%d", &h);

    get_rect_info(w, h, &a, &p);

    printf("넓이: %d, 둘레: %d\n", a, p);
}