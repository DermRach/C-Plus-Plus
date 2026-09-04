#include<iostream>

// Uso do struct

struct record
{
	std::string fullname;
	int age;
};

int main()
{
	struct record r;

	r.fullname = "DermRach";
	r.age = 30;

	std::cout << "Name: " << r.fullname;
	std::cout << "Age: " << r.age << "\n";
	return 0;
}
