#include<stdio.h>
#include"cctype.h"

// Método que verifica se a entrada é um caractere
static int verifyvalueinput(char letterv)
{
	for (int i = 0; i <= 51; i++)
	{
		if (alphabet[i] == letterv)
		{
			flagisletter = 1;
			return flagisletter;
		}
	}
}

// Método que verifica se o caractere é maísculo ou mínusculo
static int islowerupper(char letter)
{
	if (verifyvalueinput(letter))
	{
		for (int i = 0; i <= 51; i++)
		{
			if (alphabet[i] == letter)
			{
				if (i % 2 == 0)
				{
					// Valor 1 garante manipulação de dados para maísculas
					printf("Upper Case\n");
					return 1;
				}
				else
				{
					// Valor 0 garante manipulação de dados para minúsculas
					printf("Lower Case.\n");
					return 0;
				}
			}
		}

	}
	else
	{
		flagislower = -1;
	}

	return flagislower;
}
