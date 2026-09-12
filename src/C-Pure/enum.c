#include<stdio.h>

enum level
{
	LOW, // 0
	MEDIUM, // 1
	HIGH, // 2
};

// Enumeração é um conjunto de constantes
// A diferença neste caso do #define é o uso do memória
// no #define você não gasta espaço de memória

int main()
{
	enum level lv = MEDIUM;
	printf("%d", lv);

	return 0;
}
