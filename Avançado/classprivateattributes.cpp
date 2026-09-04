#include<iostream>

class Father
{
private:
	int xInt;
	float xFloat;
	std::string fullname;

public:
	Father()
	{
		xInt = 2;
		xFloat = 2.5f;
		fullname = "Classe Pai";
	}

	int getInformationValuesInt()
	{
		return xInt;
	}

	float getInformationValuesFloat()
	{
		return xFloat;
	}

	std::string getInformationValuesString()
	{
		return fullname;
	}

};

class Child : public Father
{
private:
	int cInt;
	float cFloat;
	std::string cfullname;

public:
	Child()
	{
		cInt = getInformationValuesInt();
		cFloat = getInformationValuesFloat();
		cfullname = getInformationValuesString();
	}

	void show()
	{
		std::cout << cInt << "\n";
		std::cout << cFloat << "\n";
		std::cout << cfullname << "\n";
	}
};

int main()
{
	Child c;
	// Método da classe filho com informações de atributos da classe Pai
	c.show();

	// Métodos da Classe Pai
	std::cout << c.getInformationValuesInt();
	std::cout << c.getInformationValuesFloat();
	std::cout << c.getInformationValuesString();

	// Se qualquer atribuoto da classe pai e filho for instanciada vai ocorrer erro
	// Esses atributos só podem ser alterados via argumento ou internamente

	return 0;

}
