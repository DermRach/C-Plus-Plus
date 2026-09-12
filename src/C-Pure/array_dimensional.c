#include<stdio.h>

//Vetor de duas dimensões
// 2 linhas e 2 colunas
int grades[2][2] = {
	{0, 0}, {1, 1} };

int main()
{
	// Varredura primeiro na primeira linha e depois na segunda linha
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			printf("%d\n", grades[i][j]);
		}
	}
	// Impressão será
	// 0
	// 0
	// 1
	// 1
	return 0;
}
