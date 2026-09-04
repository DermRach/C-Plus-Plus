#include<iostream>

// Esse mesmo exemplo foi usado em arraymuldimensional.cpp

std::string mapa[2][2] = {
	{"Brasil", "Brasilia"},
	{"Japao", "Toquio"}
};

int main()
{
	// Por regra a chave é Key e o valor é value
	//Em uma composição muldimensional

	std::cout << mapa[0][0] << "\n"; // Brasil (key)
	std::cout << mapa[0][1] << "\n"; // Brasilia (value)

	return 0;
}
