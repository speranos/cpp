/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:04:46 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 21:04:47 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	ft_replace(std::string s1, std::string s2, std::string *file_cont)
{
	size_t	len = 0;

	len = file_cont->find(s1);
	while(len != std::string::npos)
	{
		file_cont->erase(len, s1.length());
		file_cont->insert(len, s2);
		len = file_cont->find(s1, len + s2.length());
	}
}

int	main(int ac, char **av)
{
	if(ac != 4)
	{
		std::cout << "More or Less args reqiuerd !!!" << std::endl;
		return(0);
	}

	std::fstream	file;
	std::string		line;
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		file_cont;


	file.open(av[1], std::ios::in);
	if (file.fail())
	{
		std::cout << "File not found !!!" << std::endl;
		return(0);
	}
	while (std::getline(file, line))
	{
		file_cont += line + '\n';
	}
	if(!s1.empty())
		ft_replace(s1, s2, &file_cont);
	if (file.is_open())
	{
		file.close();
		file.open("new_file.replace", std::ios::out);
		if(!file.fail())
		{
			file << file_cont;
			file.close();
		}
	}
}