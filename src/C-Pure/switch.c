#include<stdio.h>

// Uso do Switch

int main()
{
	int opt = 5;
	switch (opt)
	{
	case 0:
		printf("Input zero.\n");
	break;
	case 1:
		printf("Input one.\n");
	break;
	case 2:
		printf("Input two.\n");
	break;
	default:
		printf("What's wrong?\n");
	}

	return 0;
}
