#include<iostream>
#include<iomanip>

// Tipos básicos
// Uso do iomanip para definir casas decimais para float e double

int xInt = 1;
float xFloat = 1.0f;
double xDouble = 2.5;
short xShort = 12;
bool xBool = true;
std::string xString = "Uma palavra";
char xChar = 'C';

int main()
{
	std::cout<< std::fixed << std::setprecision(1) << xInt << "\n" << xFloat << "\n" << xDouble << "\n" << xShort << "\n" << xBool << "\n" << xString << "\n" << xChar << "\n";
	return 0;
}
