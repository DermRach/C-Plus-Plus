#include<iostream>

// Método com retorno permite manipulação de informação por outros métodos ou programa principal
// Método sem argumentos
// Uso de incrementação += o mesmo que variable = variable + value

static int soma(int a, int b)
{
	return a + b;
}

int main()
{
	int resultado = soma(3,4);
	std::cout << resultado << "\n"; // Output 7
	resultado += 2;
	std::cout << resultado << "\n"; // Output 2 + 7 = 9
	return 0;
}
