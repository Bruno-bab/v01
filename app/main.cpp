#include "app.h"
#include <iostream>
#include <iomanip>
#include <print>

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int x;
	std::cin >> x;
	std::cout << vsite::oop::v1::to_hex(x) << "\n";
	vsite::oop::v1::mult_table(x, std::cout);
}
