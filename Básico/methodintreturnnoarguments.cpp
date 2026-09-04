#include<iostream>

// Método com retorno permite manipulação de informação por outros métodos ou programa principal
// Método sem argumentos
// Uso de incrementação += o mesmo que variable = variable + value

static int soma()
{
	int a = 3;
	int b = 4;
	return a + b;
}

int main()
{
	int resultado = soma();
	std::cout << resultado << "\n";
	resultado += 2;
	std::cout << resultado << "\n";
	return 0;
}
