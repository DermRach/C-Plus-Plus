#include<stdio.h>

// Uso scanf para obter um resultado pelo teclado
// scanf_s é o método aceito hoje em dia
// este _s significa safe.

int main()
{
	int x = 0;
	scanf_s("%d", &x);
	printf("%d", x);

	return 0;
}
