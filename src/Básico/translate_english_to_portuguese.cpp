#include<iostream>
#include<map>
#include<Windows.h>

// Uso do Map\Maps como um dicionário tradutor do Inglês para o Português
// Mecanismos como comandos de ajuda, apagar tela e revelar opções
// Exibir lista de palavras disponíveis

class Translate
{
public:
	std::map<std::string, std::string> engpt;

	Translate()
	{
		engpt["Hello"] = "Olá";
		engpt["Hi"] = "Oi";
		engpt["Good"] = "Bom";
		engpt["Bad"] = "Ruim";
		engpt["Sleep"] = "Dormir";
		engpt["Brazil"] = "Brasil";
		engpt["Learn"] = "Aprender";
		engpt["Beyond"] = "Além";
		engpt["Yes"] = "Sim";
		engpt["No"] = "Não";
		engpt["Window"] = "Janela";
		engpt["School"] = "Escola";
		engpt["End"] = "Fim";
		engpt["Weird"] = "Estranho";
		engpt["Awkward"] = "Esquisito";
		engpt["Help"] = "Socorro";
	}

	void translate(std::string word)
	{
		if (word == "CLEAR")
		{
			system("cls");
		}

		if (word == "SHOW")
		{
			std::cout << "### | TRANSLATE SYSTEM | ###\n";
			std::cout << "ENGLISH TO PORTUGUESE.\n\n";
			std::cout << "Digit -1 for quit.\n";
			std::cout << "Digit CLEAR for clean screen.\n";
			std::cout << "Digit SHOW for back HEADER INFORMATION.\n";
			std::cout << "Digit [?] show all word translated available.\n\n";
		}
		if (word == "[?]")
		{
			for (auto gl : engpt)
			{
				std::cout << gl.first << "\n";
			}
		}
		else
		{
			std::cout << "Tradução \\ Translate (English to Portuguese): " << engpt[word] << "\n";
		}

	}
};

int main()
{
	std::string term = "none";
	SetConsoleOutputCP(CP_UTF8);
	Translate t;

	std::cout << "### | TRANSLATE SYSTEM | ###\n";
	std::cout << "ENGLISH TO PORTUGUESE.\n\n";
	std::cout << "Digit -1 for quit.\n";
	std::cout << "Digit CLEAR for clean screen.\n";
	std::cout << "Digit SHOW for back HEADER INFORMATION.\n";
	std::cout << "Digit [?] show all word translated available.\n\n";
	

	while (term != "-1")
	{
		std::cout << "Input a word: ";
		std::cin >> term;

		t.translate(term);
	}

	return 0;
}
