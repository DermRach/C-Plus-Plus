#include<iostream>

// Matriz dimensional
// 2 Linhas e 2 colunas
// Esse mesmo exemplo vai ser usado para simular um HashMap

std::string mapa[2][2] = {
	{"Brasil", "Brasilia"},
	{"Japao", "Toquio"}
};

int main()
{
	// Ele pecorre primeiro a primeira linha
	// Linha 0 coluna 0
	// Linha 0 coluna 1
	// Por conversão a contagem começa no zero
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			// Output Brasil Rio de Janeiro Japao Toquio
			// \ sozinho é escape, com outro \ garante ser \ 
			std::cout << "Pais\\Capital: " << mapa[i][j] << "\n";
		}
	}

	return 0;
}
