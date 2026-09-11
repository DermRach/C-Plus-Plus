/*
  @file cctype.h
  @brief Program that provides functions to work with individual characters
  @content islowerupper, tolower, toupper, isdigit, isalpha like reference have 
  in C++ for C pure (compile in C).
  @author DermRach (Rafael Junqueira) mundopauta.com.br
  @date 11 de Setembro de 2026 - 02:39
  @version 1.0
 */

#pragma once
#ifndef CCTYPE_H
#define CCTYPE_H

extern int flagislower = -1;
extern int flagisletter = 0;

extern char alphabet[52] = {
	'A','a','B','b','C','c','D','d','E','e','F','f','G','g',
	'H','h','I','i','J','j','K','k','L','l','M','m','N','n',
	'O','o','P','p','Q','q','R','r','S','s','T','t','U','u',
	'V','v','W','w','X','x','Y','y','Z','z'
};

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

static int islowerupper(char letra);
static int verifyvalueinput(char letterv);

#endif
