#include "PhoneBook.hpp"

int	check_alpha(std::string	str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(isalpha(str[i]) == 0)
			return(0);
		i++;
	}
	return(1);
}

int	check_num(std::string	str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(isdigit(str[i]) == 0)
			return(0);
		i++;
	}
	return(1);
}

void	add(PhoneBook	*phone_book)
{
	add_fname(phone_book);
	add_lname(phone_book);
	add_nname(phone_book);
	add_phnum(phone_book);
	add_secret(phone_book);
	if(phone_book->index < 7)
		phone_book->index++;

}

void	add_fname(PhoneBook	*phone_book)
{
	std::string	input;

	while(1)
	{
		std::cout << "enter the first name:" << std::endl;
		std::cin >> input;
		if(check_alpha(input) == 1)
			break;
		else
			std::cout << "Error first name can only be alpha..." << std::endl;
	}
	phone_book->contacts[phone_book->index % 7].set("f_name", input);
}

void	add_lname(PhoneBook *phone_book)
{
	std::string	input;

	while(1)
	{
		std::cout << "enter the last name:" << std::endl;
		std::cin >> input;
		if(check_alpha(input) == 1)
			break;
		else
			std::cout << "Error last name can only be alpha..." << std::endl;
	}
	phone_book->contacts[phone_book->index % 7].set("l_name", input);
}

void	add_nname(PhoneBook *phone_book)
{
	std::string	input;

	while(1)
	{
		std::cout << "enter the nickname:" << std::endl;
		std::cin >> input;
		if(check_alpha(input) == 1)
			break;
		else
			std::cout << "Error nickname can only be alpha..." << std::endl;
	}
	phone_book->contacts[phone_book->index % 7].set("n_name", input);
}

void	add_phnum(PhoneBook *phone_book)
{
	std::string	input;

	while(1)
	{
		std::cout << "enter the phone number:" << std::endl;
		std::cin >> input;
		if(check_num(input) == 1)
			break;
		else
			std::cout << "Error phone number can only be digit..." << std::endl;
	}
	phone_book->contacts[phone_book->index % 7].set("ph_num", input);
}
void	add_secret(PhoneBook *phone_book)
{
	(void)phone_book;
}
