#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>


namespace vsite::oop::v1
{
/*
* function declarations
*/
	std::string to_hex(int value);

	std::string to_exp(double value);

	void mult_table(int n, std::ostream& out);

}
