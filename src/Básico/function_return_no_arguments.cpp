#include<iostream>

// Método com retorno permite manipulação de informação por outros métodos ou programa principal
// Método sem argumentos
// Uso de incrementação += o mesmo que variable = variable + value

static int sum()
{
	int a = 3;
	int b = 4;
	return a + b;
}

int main()
{
	int result = sum();
	std::cout << result << "\n";
	result += 2;
	std::cout << result << "\n";
	return 0;
}
