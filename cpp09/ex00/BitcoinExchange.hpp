/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 04:08:39 by aoueldma          #+#    #+#             */
/*   Updated: 2023/06/15 04:08:39 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>
#include <sstream>

typedef std::map<std::string, double> cont;
class BitcoinExchange
{
	std::string	key;
	double		value;
public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange &copy);
	~BitcoinExchange();
	BitcoinExchange &operator= (BitcoinExchange &copy);
	void		set_class(std::string befor, double after);
	std::string	get_key();
	double		get_value();
};

int		ft_check_date_value(std::string befor);
int		ft_check_date_format(std::string &befor);
int		ft_check_after(std::string &after);
int		ft_add_to_class(BitcoinExchange &map_input, std::string &befor, std::string &after);
void	ft_calculate_price(cont &map_csv, BitcoinExchange &map_input);
int		ft_parss_input(cont &map_csv, BitcoinExchange &map_input, std::string &befor, std::string &after);
void	reading_input(cont &map_csv, BitcoinExchange &map_input, char *av);
void	ft_add_csv_map(cont &map_csv, std::string &befor, std::string &after);
int		reading_file(cont &map_csv);

#endif