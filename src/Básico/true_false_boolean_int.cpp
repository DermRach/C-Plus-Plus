#include<iostream>
#include<Windows.h>

// Oriundo do C, números inteiros iguais a zero e um representa FALSO e VERDADEIRO
// O uso do booleano ou inteiro recorrem a mesma regra
// Qualquer outro valor diferente de zero e um no inteiro será tratado como valor, recairá em bug.
// Pode funcionar, mas a condicionalidade tenderá a ser sempre zero ou um.

bool flag = true;
int xflag = 1;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	std::cout << "Usando o número inteiro para definir VERDADEIRO OU FALSO" << "\n\n";
	if (xflag)
	{
		std::cout << "Significa que xflag é um, portanto true.\n";
	}
	else
	{
		std::cout << "Significa que xflag é zero, portanto false.\n";
	}

	std::cout << "Usando o valor booleano para definir VERDADEIRO OU FALSO" << "\n\n";
	if (flag)
	{
		std::cout << flag << "\n será 1, por ser True.\n";
	}
	else
	{
		std::cout << flag << "\n será 0, por ser false.\n";
	}

	return 0;
}
