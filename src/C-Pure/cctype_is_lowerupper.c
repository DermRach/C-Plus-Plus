#include<stdio.h>
#include"cctype.h"

// @date 02:41 11/09/2026
// @author (DermRach) Rafael Junqueira
// @website mundopauta.com.br
// @brief Runtine for .header "cctype" locate main Include\.H
// @Instructions use #include"cctype.h" isn't <cctype>
// @AlternativeUse use a value direct on arguments islowerupper('d');

int main()
{
	char inputchar;
	printf("Input a letter use Upper ou Lower Case\n");
	inputchar = getchar();
	int triggercase = islowerupper(inputchar);

	if (triggercase == -1)
	{
		printf("Please, input a letter.\n");
	}
	else
	{
		printf("%d", triggercase); // Se for um é Upper Case e se for zero é Lower Case
	}
	
	return 0;
}
