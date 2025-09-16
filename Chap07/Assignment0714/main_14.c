#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Assignment0714();
void fill_random(int a[], int d);
void print_array(const int a[], int d);
void shuffle_number(int a[], int d);

int main()
{
	Assignment0714();
	return 0;
}

void Assignment0714()
{
	int a[10];

	srand((unsigned)time(NULL));

	fill_random(a, 10);
	printf("¼ÅÇÃ Àü: ");
	print_array(a, 10);

	shuffle_number(a, 10);

	printf("¼ÅÇÃ ÈÄ : ");
	print_array(a, 10);

	return;
}

void fill_random(int a[], int d)
{
	for (int i = 0; i < d; i++)
		a[i] = rand() % 100;
}

void print_array(const int a[], int d)
{
	for (int i = 0; i < d; i++)
		printf("%d%s",a[i],(i + 1 ==d) ? "\n": " ");
}

void shuffle_number(int a[], int d)
{
	for (int i = d - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);

		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}