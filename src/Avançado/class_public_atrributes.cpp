#include<iostream>

class Father
{
public:
	int xInt;
	float xFloat;
	bool xBool;

	Father()
	{
		xInt = 10;
		xFloat = 205.4f;
		xBool = true;
	}
};

int main()
{
	Father f;

	// Os atributos da classe são públicos
	// Podem ser alterados via programa principal
	std::cout << f.xInt << "\n";
	std::cout << f.xFloat << "\n";
	std::cout << f.xBool << "\n";

	return 0;
}
