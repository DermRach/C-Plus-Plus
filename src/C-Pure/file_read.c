#include<stdio.h>
#include<stdlib.h>

// Leitura do arquivo

int main()
{
	FILE* archive;
	char contentarchive[200];
	errno_t erro = fopen_s(&archive, "devlog.txt", "r");

	if (erro != 0)
	{
		printf("Archive can't opened.\n");
		return 1;
	}
	else
	{
		printf("Archive was open.\n");
	}

	while (fgets(contentarchive, sizeof(contentarchive), archive) != NULL)
	{
		printf("%s", contentarchive);
	}
	
	fclose(archive);

	return 0;
}
