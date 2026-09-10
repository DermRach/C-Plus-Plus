#include<iostream>

// Método com retorno permite manipulação de informação por outros métodos ou programa principal
// Método com argumentos
// Uso de incrementação += o mesmo que variable = variable + value

static int sum(int a, int b)
{
	return a + b;
}

int main()
{
	int result = sum(3,4);
	std::cout << result << "\n"; // Output 7
	result += 2;
	std::cout << result << "\n"; // Output 2 + 7 = 9
	return 0;
}
