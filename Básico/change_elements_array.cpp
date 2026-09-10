#include<iostream>

int x[5] = { 1,2,3,4,5 };

int main()
{
	// Trocar a posição (1) = 2 para a posição (0)
	// Posição (0) = 1 troca para a posição (1)
	int auxInt = x[0];
	x[0] = x[1];
	x[1] = auxInt;

	for (int nX : x)
	{
		std::cout << nX << " "; // Output 2 1 3 4 5
	}
	return 0;
}
