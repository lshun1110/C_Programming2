#include <stdio.h>

void* swapDouble(double* pa, double* pb);

int main()
{
	double a = 3.14;
	double b = 5.12;

	double * presult = (double *)swapDouble(&a,&b);
	if (presult == NULL)
	{
		printf("1번 뭔가 잘못되었어\n");
	}

	double * presult_1 = (double *)swapDouble((double*)NULL, &b);
	if (presult_1 == NULL)
	{
		printf("2번 뭔가 잘못되었어\n");
	}
	return 0;
}

void* swapDouble(double *pa,double*pb)
{
	//1. 입력 값 정상인지 체크 : NULL 아니어야함!!
	if (pa == NULL || pb == NULL)
	{
		return NULL;
	}
	//2. swap two values
	double tmp = *pa;
	*pa = *pb;
	*pb = tmp;

	return pa;
}