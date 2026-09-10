#include<iostream>

int x[5] = { 1,2,3,4,5 };

// Pecorrer vetor usando indice e for
// Sem usar a contagem do tamanho do vetor por sizeof(x) / sizeof(x[0]

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << i << "." << x[i] << "\n";
	}
	return 0;
}
