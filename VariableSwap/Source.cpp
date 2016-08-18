#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int clone;

	std::cout << "This program will take two numbers, store them into variables a and b, then swap them." << std::endl;
	system("pause");
	system("cls");
	std::cout << "Enter your first number here: ";
	std::cin >> a;
	std::cout << "Enter your second number here:";
	std::cin >> b;
	system("cls");
	std::cout << "Variable a is " << a << ". Variable b is " << b << "." << std::endl;
	clone = a;
	a = b;
	b = clone;
	std::cout << "After swapping, variable a is " << a << " and variable b is " << b << "." << std::endl;
	system("pause");
	return 0;
}