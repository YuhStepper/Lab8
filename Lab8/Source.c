#include <locale.h>
#include <stdio.h>
#include <math.h>

double f(double a)
{
	double y = pow(a, 3) + 3 * pow(a, 2) - 3;
	return y;
}

void main()
{
	//
	setlocale(LC_CTYPE, "RUS");

	double x = 2.;
	printf("y = x^3 + 3x^2 - 3 [2, 4]\n");

	double y = 0.;
	double step = 0.;

	int s = 1;
	while (s != 0)
	{
		x = 2.;
		puts("¬ведите значение шага табул€ции: ");
		scanf("%lf", &step);

		printf("|    x   |   f(x)  |");

		for (; x <= 4.; x += step)
			printf("\n|  %.2lf  |  %.2lf  |", x, f(x));
		printf("\n’отите ли вы повторить операцию, изменив шаг табул€ции введите 1, если да, 0, если нет?\n");
		scanf("%d", &s);
	}
}
