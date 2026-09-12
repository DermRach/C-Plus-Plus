#include<stdio.h>
#include<stdlib.h>

// Escrita em um arquivo, com função de sobrescrever 'w'

int main()
{
	FILE* archive;
	errno_t erro = fopen_s(&archive, "devlog.txt", "w");

	if (erro != 0)
	{
		printf("Archive can't created.\n");
		return 1;
	}
	else
	{
		printf("Archive was created with sucess.\n");
	}

	fprintf(archive, "Write on file.\n");
	fprintf(archive, "New line with a integer number %d\n", 200);
	fprintf(archive, "New line with a float number %.3f", 12.324f);
	
	fclose(archive);

	return 0;
}
