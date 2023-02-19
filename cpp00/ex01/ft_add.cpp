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
	if(phone_book->index <= 7)
		phone_book->index++;
	add_fname(phone_book);
	add_lname(phone_book);
	add_nname(phone_book);
	add_phnum(phone_book);
	add_secret(phone_book);
}

void	add_fname(PhoneBook	*phone_book)
{
	std::string	input;

	while(1)
	{
		std::cout << "enter the first name:" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if(checkspace(input) && input.length() > 0)
			std::cout << "Try with no space...!" << std::endl;
		else if(check_alpha(input) == 1 && input.length() > 0)
			break;
		else
			std::cout << "Error first name can only be alpha..." << std::endl;
	}
	phone_book->contacts[phone_book->index % 8].set("f_name", input);
}

void	add_lname(PhoneBook *phone_book)
{
	std::string	input;

	while(1)
	{
		std::cout << "enter the last name:" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if(checkspace(input) && input.length() > 0)
			std::cout << "Try with no space...!" << std::endl;
		else if(check_alpha(input) == 1 && input.length() > 0)
			break;
		else
			std::cout << "Error last name can only be alpha..." << std::endl;
	}
	phone_book->contacts[phone_book->index % 8].set("l_name", input);
}

void	add_nname(PhoneBook *phone_book)
{
	std::string	input;

	while(1)
	{
		std::cout << "enter the nickname:" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if(checkspace(input) && input.length() > 0)
			std::cout << "Try with no space...!" << std::endl;
		else if(check_alpha(input) == 1 && input.length() > 0)
			break;
		else
			std::cout << "Error nickname can only be alpha..." << std::endl;
	}
	phone_book->contacts[phone_book->index % 8].set("n_name", input);
}

void	add_phnum(PhoneBook *phone_book)
{
	std::string	input;

	while(1)
	{
		std::cout << "enter the phone number:" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if(checkspace(input) && input.length() > 0)
			std::cout << "Try with no space...!" << std::endl;
		else if(check_num(input) == 1 && input.length() > 0)
			break;
		else
			std::cout << "Error phone number can only be digit..." << std::endl;
	}
	phone_book->contacts[phone_book->index % 8].set("ph_num", input);
}
void	add_secret(PhoneBook *phone_book)
{
	std::string input;

	while (1)
	{	
		std::cout << "enter the darkest secre:" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		else if(input.length() == 0)
			std::cout << "Please enter the darkest secre:" << std::endl;
		else
			break;
	}
	phone_book->contacts[phone_book->index % 8].set("secret", input);
}
