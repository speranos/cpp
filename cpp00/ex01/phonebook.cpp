#include "PhoneBook.hpp"

int main()
{
	PhoneBook phone_book;
	std::string	input;

	while (1)
	{
		std::cout << "Entere a cmd..." << std::endl;
		std::cin >> input;
		if(input == "ADD")
			add(&phone_book);
		else if(input == "SEARCH")
			searche(&phone_book);
		else if(input == "EXIT")
			break;
		if(input.length() == 0)
			break;
		else
			std::cout << "Cmd not found..." << std::endl;
	}
	// std::cout << "f_name ============= " << phone_book.contacts[phone_book.index - 1].get("f_name") << std::endl;
	
}