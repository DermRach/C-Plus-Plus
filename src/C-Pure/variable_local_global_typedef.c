#include<stdio.h>

// Uso do typedef permite renomear estruturas e variáveis

typedef float flutuante; // Variavel global
// pode ser usar nos métodos externos e o int main

static void type()
{
	flutuante value = 2.5f;
	printf("%.2f\n", value);
}

int main()
{
	// Exemplo int vira inteiro
	// Como foi definido localmente no int main ele só pode ser usado
	typedef int inteiro;
	inteiro x = 1;

	type();
	printf("%d", x);

	return 0;
}
