#include<iostream>

// Variável local de método sem retorno


static void showInformationGlobal()
{
	int numberserial = 3;
	std::cout << numberserial << "\n";
}

int main()
{
	showInformationGlobal();
	//std::cout << numberserial << "\n"  fora dos comentários vai dar erro
	return 0;
}
