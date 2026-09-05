#include<iostream>
#include"RandomSeed.hpp"

// Criação de um header com a função random
// Este programa depende do RandomSeed.hpp para funcionar (Localizado na pasta HPP)

int main()
{
	int xgetSeed = generatorSeed(20);
	std::cout << xgetSeed << "\n";
	return 0;
}
