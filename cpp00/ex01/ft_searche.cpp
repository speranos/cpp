#include "PhoneBook.hpp"

void	searche(PhoneBook *phone_book)
{
	int	i;

	i = 0;
	while (1)
	{
		column(phone_book);
		break;
		
	}
	
}

void	column(PhoneBook *phone_book)
{
	std::string	str;
	int			i;
	int			len;

	i = 0;
	len = 0;
	std::cout << "index" << std::setw(11 - 5);
	std::cout << "|";
	std::cout << "firstname" << std::setw(11 - 9);
	std::cout << "|";
	std::cout << "lastname" << std::setw(11 - 8);
	std::cout << "|";
	std::cout <<  "nickname" << std::endl;
	while (i <= phone_book->index)
	{
		std::cout << i << std::setw(11 - 1);

		std::cout << "|";

		if(phone_book->contacts[i].get("f_name").length() > 10)
			print_plus_ten(phone_book->contacts[i].get("f_name"));
		else
			std::cout << phone_book->contacts[i].get("f_name") << std::setw(11 - (phone_book->contacts[i].get("f_name").length()));
		
		std::cout << "|";

		if(phone_book->contacts[i].get("l_name").length() > 10)
			print_plus_ten(phone_book->contacts[i].get("l_name"));
		else
			std::cout << phone_book->contacts[i].get("l_name") << std::setw((11 - phone_book->contacts[i].get("l_name").length()));

		std::cout << "|";

		if(phone_book->contacts[i].get("n_name").length() > 10)
			print_plus_ten(phone_book->contacts[i].get("n_name"));
		else
			std::cout << phone_book->contacts[i].get("n_name");			
		i++;
		std::cout << std::endl;
	}
	ft_index_input(phone_book);
}

void	print_plus_ten(std::string input)
{
	int	i;

	i = 0;
	while(i < 9)
		std::cout << input[i++];
	std::cout << ".";
}

void	ft_index_input(PhoneBook *phone_book)
{
	std::string	input;
	while(1)
	{
		std::cout << "Please entere an index..." << std::endl;
		std::getline(std::cin, input);
		//input
		//check num an lenght <= 2;
	}
}