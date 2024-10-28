#include "app.h"
#include <format>

namespace vsite::oop::v1
{
/*
* function implementations
*/
	std::string to_hex(int value)
	{
		return std::format("{:X}", value);
	}

	std::string to_exp(double value)
	{
		return std::format("{:.2e}", value);
	}

	void mult_table(int n, std::ostream& s)
	{
		if (n < 1 or n > 20) return;
		s << std::format("{}", 0);
		for (int x = 1; x <= n; ++x)
		{
			s << std::format("{:4}", x);
		}

		s << "\n";

		for (int i = 1; i <= n; ++i)
		{
			s << std::format("{}", i);
			for (int j = 1; j <= n; ++j)
			{
				s << std::format("{:4}", i * j);
			}
			s << "\n";
		}
	}
} // namespace

