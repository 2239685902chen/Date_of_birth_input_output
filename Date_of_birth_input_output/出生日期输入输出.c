#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0, e = 0;
	scanf("%4d%2d%2d", &q, &w, &e);
	printf("year=%d\n", q);
	printf("month = %02d\n", w);
	printf("date = %02d\n", e);
	return 0;
}