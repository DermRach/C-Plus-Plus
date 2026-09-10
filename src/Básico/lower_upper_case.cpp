#include<iostream>
#include<cctype>
#include<Windows.h>

// Programa que recebe um valor do tipo texto, depois o coloca no formato Nnnn
// N maíscula e nnnn minúscula

// Outra forma é usar o transform de Algorithm (transform (variable.begin(), variable.end(), variable.begin, function)

int main()
{
	std::string input = "none";

	// Example input Green, GREEN, green GrEeN 
	std::cout << "Input a value (type string\\text.\n";
	std::cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		input[i] = tolower(input[i]); // turn LOWERCASE
	}

	input[0] = toupper(input[0]); // turn UPPERCASE

	// Ouput is always Green
	std::cout << input << "\n";
	return 0;
}
