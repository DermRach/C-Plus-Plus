#include<stdio.h>

// struct
struct pessoa
{
	const char* name;
	int age;
};

int main()
{
	struct pessoa p;
	p.name = "DermRach";
	p.age = 30;

	printf("Name: %s\n", p.name);
	printf("Age: %d\n", p.age);

	return 0;
}
