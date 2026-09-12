#include<stdio.h>
#include<stdlib.h>

// Escrita em um arquivo, com função de anexar 'a'
// A nova escrita não substitui o arquivo ele agrega.

int main()
{
	FILE* archive;
	errno_t erro = fopen_s(&archive, "devlog.txt", "a"); // modo de escrita 'a' de append

	if (erro != 0)
	{
		printf("Archive can't created.\n");
		return 1;
	}
	else
	{
		printf("Archive was created with sucess.\n");
	}

	fprintf(archive, "\n New record after last write");
	
	fclose(archive);

	return 0;
}
