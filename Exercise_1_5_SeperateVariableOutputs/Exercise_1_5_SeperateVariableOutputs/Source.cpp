#include <iostream>

int main()
{
	// print the product of v1, and v2
	std::cout << "Enter two numbers:" << std::endl;
	std::cout << ">>";

	int v1, v2;
	std::cin >> v1 >> v2;
	std::cout << "the product of op1:" << v1 << std::endl;
	std::cout << "and op2:" << v2 << std::endl;
	std::cout << "is " << v1 + v2 << std::endl;
	system("pause");
}