#include "PhoneBook.hpp"

void	searche(PhoneBook *phone_book)
{
	std::string	str;
	int			i;
	int			len;

	i = 0;
	len = 0;

	std::cout << std::setw(10) << std::left << "index";
	std::cout << "|";
	std::cout << std::setw(10) << std::left << "firstname";
	std::cout << "|";
	std::cout << std::setw(10) << std::left << "lastname";
	std::cout << "|";
	std::cout << std::setw(10) << std::left << "nickname";
	std::cout << std::endl;
	while (i <= phone_book->index && i >= 0 && i < 8)
	{
		std::cout << std::setw(10) << std::left << i;
		std::cout << "|";

		if(phone_book->contacts[i].get("f_name").length() > 10)
			print_plus_ten(phone_book->contacts[i].get("f_name"));
		else
			std::cout << std::setw(10) << std::left << phone_book->contacts[i].get("f_name");
		std::cout << "|";

		if(phone_book->contacts[i].get("l_name").length() > 10)
			print_plus_ten(phone_book->contacts[i].get("l_name"));
		else
			std::cout << std::setw(10) << std::left << phone_book->contacts[i].get("l_name");
		std::cout << "|";

		if(phone_book->contacts[i].get("n_name").length() > 10)
			print_plus_ten(phone_book->contacts[i].get("n_name"));
		else
			std::cout << std::setw(10) << std::left << phone_book->contacts[i].get("n_name");		
		i++;
		std::cout << std::endl;
	}
	if(phone_book->index >= 0)
		ft_index_input(phone_book);
	return;
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
	int			num;

	while(1)
	{
		std::cout << "Please entere an index..." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if(!check_num(input) || input.length() != 1)
			std::cout << "unavailable index please retry..." << std::endl;
		else
		{
			num = std::stoi(input);
			if(num > phone_book->index || num ==  8)
				std::cout << "unavailable index please retry..." << std::endl;
			else
				{
					std::cout << phone_book->contacts[num].get("f_name") << std::endl;
					std::cout << phone_book->contacts[num].get("l_name") << std::endl;
					std::cout << phone_book->contacts[num].get("n_name") << std::endl;
					std::cout << phone_book->contacts[num].get("ph_num") << std::endl;
					std::cout << phone_book->contacts[num].get("secret") << std::endl;
					break;
				}
		}
	}
}