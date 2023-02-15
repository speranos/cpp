#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <ctype.h>
#include <iomanip>

class PhoneBook
{
	public:
		int     index;
		Contact contacts[7];

	// void	set(int	index)
	// {
	// 	contacts[index]

	// }
};

//		***********GLOBALE***********		//
int	checkspace(std::string input);
int		check_alpha(std::string	str);
int		check_num(std::string	str);

//		***********ADD***********		//
void	add(PhoneBook	*phone_book);
void	add_fname(PhoneBook	*phone_book);
void	add_lname(PhoneBook *phone_book);
void	add_nname(PhoneBook *phone_book);
void	add_phnum(PhoneBook *phone_book);
void	add_secret(PhoneBook *phone_book);

//		***********Searche***********		//

void	searche(PhoneBook	*phone_book);
void	column(PhoneBook *phone_book);
// void	print_space(int	len);
void	print_plus_ten(std::string input);
void	ft_index_input(PhoneBook *phone_book);

#endif