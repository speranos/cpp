#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <ctype.h>

class PhoneBook
{
	public:
		int     index;
		Contact contacts[8];

	// void	set(int	index)
	// {
	// 	contacts[index]

	// }
};
//		***********ADD***********		//
int		check_alpha(std::string	str);
int		check_num(std::string	str);
void	add(PhoneBook	*phone_book);
void	add_fname(PhoneBook	*phone_book);
void	add_lname(PhoneBook *phone_book);
void	add_nname(PhoneBook *phone_book);
void	add_phnum(PhoneBook *phone_book);
void	add_secret(PhoneBook *phone_book);



#endif