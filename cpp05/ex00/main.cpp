#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat a("corki", 1);
	Bureaucrat b("vex", 150);
	Bureaucrat c("nunu", 45);
	try
	{
		std::cout << a << std::endl;
		std::cout << b << std::endl;

		b.decrement();
		a.increment();
		std::cout << a << std::endl;
	}
	catch(const char* mssg)
	{
		std::cout << mssg << std::endl;
	}
	std::cout << c << std::endl;
	c.decrement();
	
}
