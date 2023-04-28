#include "Base.hpp"

Base::~Base()
{
	std::cout << "Base Destr called !" << std::endl;
}

Base*	Base::generate(void)
{
	Base *ptr = NULL;
	std::srand(std::time(nullptr));
	int random_number = (std::rand() % 3);

	std::cout << "num == " << random_number << std::endl;
	if(random_number == 0)
		ptr = new A;
	else if(random_number == 1)
		ptr = new B;
	else
		ptr = new C;
	return ptr;
}

void Base::identify(Base* p)
{
	if(dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if(dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void Base::identify(Base& p)
{
	//throw exeption !!!!!!
	try
	{
		A &test = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(test);
	}
	catch(const std::exception& e){}
	try
	{
		B &test = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(test);
	}
	catch(const std::exception& e){}
	try
	{
		C &test = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(test);
	}
	catch(const std::exception& e){}
}
