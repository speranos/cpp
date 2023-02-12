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
	while (i < phone_book->index)
	{
		std::cout << i;
		std::cout << std::setw(9) << "|";
		str = phone_book->contacts[i].get("f_name");
		len = str.length();
		if(len < 10)
		{
			std::cout << str;
			// print_space(len);
			std::cout << std::setw(10 - len) << "|";
		}
		else if(len > 10)
			//len >10;
		// str = phone_book->contacts[i].get("f_name");
		std::cout << phone_book->contacts[i].get("l_name") << " | ";
		std::cout << phone_book->contacts[i].get("n_name") << std::endl;
		i++;
	}
}

void	print_space(int	len)
{
	int	i;

	i = 10;

	while(len <= i)
	{
		std::cout << " ";
		len++;
	}
}