#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;
	int z, i;

	printf("두 실수 입력: ");
	scanf("%lf %lf", &x, &y);

	printf("연산종류 번호선택 1(+), 2(-), 3(*), 4(/): ");
	scanf("%d", &z);
	switch (1)
	{
	case 1:
		printf("%.2f + %.2f = %.2f\n", x, y, x + y);
		break;

	case 2:
		printf("%.2f - %.2f = %.2f\n", x, y, x - y);
		break;

	case 3:
		printf("%.2f * %.2f = %.2f\n", x, y, x * y);
		break;

	case 4:
		printf("%.2f / %.2f = %.2f\n", x, y, x / y);
		break;
	}

	return 0;
}