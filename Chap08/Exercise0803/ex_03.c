/*
	���� 8-3 : �������� ���
*/

#include <stdio.h>

int main()
{
    int x = 10;
    int* p = &x;    // p�� a�� �ּҷ� �ʱ�ȭ�Ѵ�.

    printf("x = %d\n", x);
    printf("&x = %p\n", &x);   // &x�� �ּҰ��̹Ƿ� %p�� ���

    printf("p = %p\n", p);
    printf("*p = %d\n", *p);   // *p�� int�� �����̹Ƿ� %d�� ���
    printf("&p = %p\n", &p);   // �����͵� �����̹Ƿ� �ּҰ� �ִ�.

    *p = 20;   // x = 20; ���� ����ȴ�.

    printf("*p = %d\n", *p);   // printf("*p = %d\n", x); �� ����
    return 0;
}