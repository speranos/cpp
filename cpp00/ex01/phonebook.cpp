#include "PhoneBook.hpp"

int main()
{
	PhoneBook phone_book;
	std::string	input;

	phone_book.index = -1;
	while (1)
	{
		std::cout << "Entere a cmd..." << std::endl;
		std::getline(std::cin, input);
		if(checkspace(input))
			std::cout << "Try with no space...!" << std::endl;
		else if(input == "ADD")
			add(&phone_book);
		else if(input == "SEARCH")
			searche(&phone_book);
		else if(input == "EXIT")
			break;
		else if(input.length() == 0)
			break;
		else
			std::cout << "Cmd not found..." << std::endl;
	}
	// std::cout << "f_name ============= " << phone_book.contacts[phone_book.index - 1].get("f_name") << std::endl;
	
}

int	checkspace(std::string input)
{
	int	i;

	i = 0;
	while(input[i])
	{
		if(input[i++] <= 32)
			return(1);
	}
	return(0);
}