#include<iostream>
#include<map>
#include<Windows.h>

// Abaixo o comportamento com diversos métodos do map
// Array padrão com chave e valor
// Tamanho, adicionar, remover específico, remover todos e forEach

int main()
{
	std::map<std::string, int> recordpeople = { {"Juno Temple", 1988}, {"Mila Jovovich", 1975},
		{"Christina Ricci", 1981}};

	std::cout << "Name | Year Birth\n";
	std::cout << "Name: " << "Juno Temple" << " | " << recordpeople["Juno Temple"] << "\n";
	std::cout << "Name: " << "Mila Jovovich" << " | " << recordpeople["Mila Jovovich"] << "\n";
	std::cout << "Name: " << "Christina Ricci" << " | " << recordpeople["Christina Ricci"] << "\n\n";

	// Add new element
	recordpeople["Sigourney Weaver"] = 1949;

	std::cout << "New additional\n\n";
	std::cout << "Name | Year Birth\n";
	std::cout << "Name: " << "Juno Temple" << " | " << recordpeople["Juno Temple"] << "\n";
	std::cout << "Name: " << "Mila Jovovich" << " | " << recordpeople["Mila Jovovich"] << "\n";
	std::cout << "Name: " << "Christina Ricci" << " | " << recordpeople["Christina Ricci"] << "\n";
	std::cout << "Name: " << "Sigourney Weaver" << " | " << recordpeople["Sigourney Weaver"] << "\n\n";


	// Remove specific element (is value, not key)
	// When print on screen the value is 0
	recordpeople.erase("Mila Jovovich");

	std::cout << "Remove Mila Jovovich \n\n";
	std::cout << "Name | Year Birth\n";
	std::cout << "Name: " << "Juno Temple" << " | " << recordpeople["Juno Temple"] << "\n";
	std::cout << "Name: " << "Mila Jovovich" << " | " << recordpeople["Mila Jovovich"] << "\n"; // result is 0
	std::cout << "Name: " << "Christina Ricci" << " | " << recordpeople["Christina Ricci"] << "\n";
	std::cout << "Name: " << "Sigourney Weaver" << " | " << recordpeople["Sigourney Weaver"] << "\n\n";

	// Check the map is empty (without values), if terminated program or else the for loop
	if (recordpeople.empty())
	{
		exit(1);
	}
	else
	{
		//For loop using forEach
		// auto identifier two typedatas correctly
		for (auto r : recordpeople)
		{
			// first (key) and second (value)
			std::cout << r.first << " in " << r.second << "\n"; // Result is 0
		}
	}
	// Remove all elements (are values, not keys)
	// when prin on screen the values are 0
	
	recordpeople.clear(); // Use // of commentary avoid clear elements and watch second condition next

	if (recordpeople.empty())
	{
		std::cout << "Remove all values \n\n";
		std::cout << "Name | Year Birth\n";
		std::cout << "Name: " << "Juno Temple" << " | " << recordpeople["Juno Temple"] << "\n"; // result is 0
		std::cout << "Name: " << "Mila Jovovich" << " | " << recordpeople["Mila Jovovich"] << "\n"; // result is 0
		std::cout << "Name: " << "Christina Ricci" << " | " << recordpeople["Christina Ricci"] << "\n"; // result is 0
		std::cout << "Name: " << "Sigourney Weaver" << " | " << recordpeople["Sigourney Weaver"] << "\n\n"; // result is 0
	}
	else
	{
		std::cout << "\n\n Map is not empty. So program terminated.\n";
		exit(1);
	}
	
	// Get size of map array
	// After additional, before the size is 3
	int size = recordpeople.size(); // return integer
	std::cout << "Size: " << size << "\n\n\n"; // result is 4, remember the key maintain only values removed

	return 0;
}
