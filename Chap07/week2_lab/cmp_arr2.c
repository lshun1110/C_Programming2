// 기본적으로 lab_cmp 문제는 is_equal의 역할이 함수가 기능으로 나눠지면서 함수의 반환값에 묻히게 됨

#include <stdio.h>

#define Max_arr 5

int main()
{
	int x[Max_arr] = { 1,2,3,4,5 };
	int y[Max_arr] = { 1,2,3,4,5 };

	int i;
	int is_equal = 1;

	int size = sizeof(x) / sizeof(x[0]);

	if (x == y)
		printf("두 배열의 주소가 같습니다.\n");

	if (isEqualArrayInt(x, y ,size) == 1)
		printf("두 배열은 같습니다.");

	return 0;
}

int isEqualArrayInt(int* a, int* b, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] != b[i])
		{
			return 0;
		}
	}
	return 1;
}