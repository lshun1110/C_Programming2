/*
    파일명: assign12.c
    내용: PA12 정수형 배열과 키 값을 매개변수로 전달받아 배열에서 키 값을 모두 찾아
          인덱스를 배열에 저장해서 리턴하는 find_all_in_array 함수를 작성하시오. 
          찾은 항목 갯수를 리턴함
    작성자: 이승훈
    날짜: 2025.9.22
    버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0812();
int  find_all_in_array(const int* a, int n, int key, int* idx_out, int cap);
void print_array(const int* a, int n, const char* label);

int main() 
{
    Assignment0812();
    return 0;
}

void Assignment0812()
{
    int arr[] = { 12, 45, 62, 99, 83, 23, 12, 72, 37 };
    int n = (int)(sizeof(arr) / sizeof(arr[0]));
    int key;

    print_array(arr, n, "정수형 배열:");
    printf("찾을 값? ");
    scanf("%d", &key);

    int idx[sizeof(arr) / sizeof(arr[0])];
    int found = find_all_in_array(arr, n, key, idx, n);

    if (found == 0) 
    {
        printf("찾은 항목은 없습니다.\n");
    }
    else 
    {
        printf("찾은 항목은 %d개 입니다.\n", found);
        printf("찾은 항목의 인덱스: ");
        for (int i = 0; i < found; i++) 
        {
            if (i == found - 1) 
                printf("%d\n", idx[i]);
            else
                printf("%d ", idx[i]);
        }
    }
}

int find_all_in_array(const int* a, int n, int key, int* idx_out, int cap) 
{
    int cnt = 0;
    for (int i = 0; i < n && cnt < cap; i++) 
    {
        if (a[i] == key) 
        {
            idx_out[cnt] = i;
            cnt++;
        }
    }
    return cnt; 
}

void print_array(const int* a, int n, const char* label)
{
    if (label && *label) 
        printf("%s\n", label);
    for (int i = 0; i < n; i++) {
        if (i == n - 1) 
            printf("%d\n", a[i]);
        else         
            printf("%d ", a[i]);
    }
}