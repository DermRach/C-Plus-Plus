#include<iostream>
#include<string>

// Este mesmo exemplo será usado para a herança e classe, para que o protected seja acessado

// Os atributos particularmente não são acessíveis no int main, apenas por meio do método
// Método showInformation é público
// Os atributos Salary e adressemployee são publicos, podem ser "alterados" no programa principal
// Conversão de int para string para usando também o append para 'cocatenar'

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

class Funcionario : public Diretoria
{
public:
	std::string salaryCompose;
	std::string adressemployeeCompose;
	// pegam os atributos protegidos da classe pai
	std::string namedepartmentEmployee; 
	std::string namedepartmentFinancesEmployee;
	std::string fullnameemployee;

	// Constructor com argumento, inclui o nome do funcionario
	// É possível criar diversos construtores em uma classe
	Funcionario(std::string name)
	{
		salaryCompose = std::to_string(salary);
		adressemployeeCompose = std::to_string(adressemployee);
		namedepartmentEmployee = namedepartmentresources;
		namedepartmentFinancesEmployee = namedepartmentfinances;
		fullnameemployee = name;
	}

	// Exibie o funcionário que já trabalha no local
	Funcionario()
	{
		salaryCompose = std::to_string(salary);
		adressemployeeCompose = std::to_string(adressemployee);
		namedepartmentEmployee = namedepartmentresources;
		namedepartmentFinancesEmployee = namedepartmentfinances;
		fullnameemployee = "Carlos";
	}

	void showInformationEmployee()
	{
		std::cout << "Nome do Funcionario: " << fullnameemployee << "\n";
		std::cout << "Matricula: " << adressemployeeCompose.append(":: T.I") << "\n";
		std::cout << "Nome do Departamento: " << namedepartmentEmployee << "\n";
		std::cout << "Departamento Responsavel: " << namedepartmentFinancesEmployee << "\n";
		std::cout << "Salario: R$ " << salaryCompose.append(",00") << "\n";
	}
};

int main()
{
	Funcionario f1; // Sem argumentos, não precisa usar ()
	// Herda o método da classe Pai
	f1.showInformation();
	f1.showInformationEmployee(); // O nome do funcionario será Carlos

	Funcionario f2("Manuela");
	f2.showInformation();
	f2.showInformationEmployee(); // O nome do funcionario será Manuela
	return 0;
}
