#include<iostream>
#include<typeinfo>

// Conversão de String para character
// Entendimento de string como classe Wraper e array
// Sem o uso do for apenas para efeitos didáticos

std::string name = "DermRach";
char xChar, yChar, zChar, dChar, eChar, mChar, nChar, tChar;

int main()
{
	xChar = name[0];
	yChar = name[1];	
	zChar = name[2];
	dChar = name[3];
	eChar = name[4];
	mChar = name[5];
	nChar = name[6];
	tChar = name[7];

	std::cout << "Como caracteres:\n";
	std::cout << xChar << yChar << zChar << dChar << eChar << mChar << nChar << tChar << "\n";
	std::cout << "Como string:\n";
	std::cout << name << "\n";

	std::cout << "Tipos de dados:\n";
	std::cout << typeid(name).name() << "\n";
	std::cout << typeid(xChar).name() << "\n"; // Apenas de um caratere, o efeito será o mesmo para os demais

	return 0;
}
