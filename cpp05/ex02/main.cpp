#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main()
{
	try
	{
		Bureaucrat a("corki", 5);
		Bureaucrat c("nun", 1);
		// AForm b("vex", 2, 1);
		std::cout << a << std::endl;
		//std::cout << b << std::endl;

		a.increment();
//		a.si//gn//Form(b);
		//b.beSigned(c);
		std::cout << a << std::endl;
		//std::cout << b << std::endl;

	}
	catch(std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	// std::cout << c << std::endl;
	// c.decrement();
	
}
