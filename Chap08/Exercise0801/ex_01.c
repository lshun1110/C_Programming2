/*
	���� 8-1 : �������� ����Ʈ ũ�� ���ϱ� 
*/

// �����ʹ� �ּҷμ� ũ�Ⱑ �׻� ����. 
// �����ʹ� Ÿ���� ���� �ּ��̴�.

#include <stdio.h>

int main()
{
    int* pi; // *�� ������ ������ �ٿ��ش�.
    double* pd;
    char* pc;

    printf("sizeof(pi) = %zd\n", sizeof(pi)); // 4����Ʈ (32��Ʈ �÷���)
    printf("sizeof(pd) = %zd\n", sizeof(pd)); // 4����Ʈ
    printf("sizeof(pc) = %zd\n", sizeof(pc)); // 4����Ʈ

    printf("sizeof(int) = %zd\n", sizeof(int)); // 4����Ʈ
    printf("sizeof(double *) = %zd\n", sizeof(double)); // 4����Ʈ
    printf("sizeof(char) = %zd\n", sizeof(char)); // 4����Ʈ

    return 0;
}