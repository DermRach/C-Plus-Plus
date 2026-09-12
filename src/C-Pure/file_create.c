#include<stdio.h>
#include<stdlib.h>

// criação de arquivo em C

int main()
{
	FILE* arquivo;
	errno_t erro = fopen_s(&arquivo, "devlog.txt", "w");

	if (erro != 0)
	{
		printf("Archive can't created.\n");
	}
	else
	{
		printf("Archive was created with sucess.\n");
	}

	return 0;
}
