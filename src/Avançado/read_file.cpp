#include<iostream>
#include<fstream>
#include<string>

// Leitura de arquivo

int main()
{
	std::string contentFile;
	std::ifstream fileRead("outronome.txt");

	while (std::getline(fileRead, contentFile))
	{
		std::cout << contentFile;
	}

	return 0;
}
