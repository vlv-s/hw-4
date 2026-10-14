#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b;
	printf("Введите уровень голода Вани(A):");
	if (scanf_s("%d", &a) != 1) return 1;
	printf("Введите уровень голода Пети(B):");
	if (scanf_s("%d", &b) != 1) return 1;
	int a_hungry = (a % 2 == 0);
	int b_hungry = (b % 2 == 0);
	if (a_hungry ^ b_hungry)
	{
		printf("Режем на 4 части.\n");
	}
	else
	{
		printf("Режем на 6 кусков.\n");
	}
	return 0;
}