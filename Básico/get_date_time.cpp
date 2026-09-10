#include<iostream>
#include<Windows.h>
#include<ctime>

// Para obter a data usa-se o formato ctime_s
// Struct time_t e este inicializa com a referência da variavel &variable (endereço)
// defini-se um char com tamanho de pelo menos 26 caracteres
// Struct errno_t para garantir tratar exceção para data se ela não for devidamente carregada

const int size = 26; // O tamanho suficiente para quantidade de caracteres
char buf[size];
errno_t err;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	time_t timestamp = time(&timestamp);
	// ctime_s(const char buf, size, time_t const)
	err = ctime_s(buf, size, &timestamp);
	if (err != 0)
	{
		std::cout << "Ocorreu um erro: " << err << "\n";
	}
	else
	{
		std::cout << "A data atual é: " << buf << "\n";
	}
	return 0;
}
