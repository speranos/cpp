#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat a("corki", 1);
	Bureaucrat b("vex", 150);
	Bureaucrat c("nunu", 45);
	Bureaucrat x;
	try
	{
		std::cout << x << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		b.decrement();
		a.increment();
		std::cout << a << std::endl;
	}
	catch(std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << a << std::endl;
	c.decrement();
	std::cout << c << std::endl;
	
}
