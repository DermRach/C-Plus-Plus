#include<iostream>

int x[5] = { 1,2,3,4,5 };

// Pecorrer vetor usando o foreach 
// Sem usar a contagem do tamanho do vetor por sizeof(x) / sizeof(x[0]

int main()
{
	for (int nX : x)
	{
		std::cout << nX << "\n";
	}
	return 0;
}
