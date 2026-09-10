#include<iostream>

// Este mesmo exemplo será usado para a herança e classe, para que o protected seja acessado

// Os atributos particularmente não são acessíveis no int main, apenas por meio do método
// Método showInformation é público
// Os atributos Salary e adressemployee são publicos, podem ser "alterados" no programa principal

class Diretoria
{
protected: // Atributos apenas acessíveis entre classes herdeiras
	std::string namedepartmentresources;
	std::string namedepartmentfinances;

public: // Necessário para que o constructor seja acessível
	int salary;
	int adressemployee;
	Diretoria() // Constructor com inicialização de variáveis sem argumentos
	{
		namedepartmentresources = "Human Resource";
		namedepartmentfinances = "Finances Resource";
		salary = 1000;
		adressemployee = 1212;
	}
	
	void showInformation()
	{
		std::cout << "Departamento pessoal: " << namedepartmentresources << "\n";
		std::cout << "Departamento Financeiro: " << namedepartmentfinances << "\n";
		std::cout << "Salario: " << salary << "\n";
		std::cout << "Matricula: " << adressemployee << "\n";
	}

};

int main()
{
	Diretoria d;
	// Informação é exibida o que está no constructor
	d.showInformation();

	d.adressemployee = 2021;
	d.salary = 500;

	// Já com a devida alteração nos atributos públicos
	// Os atributos protegidos continuam com o mesmo valor
	d.showInformation();
	return 0;
}
