#include <iostream>

// Usando namespace personalizado

namespace global
{
	int xInt, yInt, zInt;
	float xFloat, yFloat, zFloat;
	
}

int main()
{
	global::xInt = 3;
	global::yInt = 4;
	global::zInt = 10;
	global::xFloat = 3.5f;
	global::yFloat = 4.5f;
	global::zFloat = 10.5f;

	std::cout << "Valores Inteiros:\n";
	std::cout << global::xInt << "\n" << global::yInt << "\n" << global::zInt << "\n\n";

	std::cout << "Valores Decimais:\n";
	std::cout << global::xFloat << "\n" << global::yFloat << "\n" << global::zFloat << "\n\n";
	return 0;
}
