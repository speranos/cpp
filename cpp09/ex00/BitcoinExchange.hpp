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
	void	set_class(std::string befor, double after)
	{
		key = befor;
		value = after;
	}
	std::string	get_key()
	{
		return(key);
	}
	double	get_value()
	{
		return(value);
	}
};

int	ft_check_date_value(std::string befor)
{
	int	y;
	int	m;
	int	d;

	std::istringstream year(befor.substr(0, 4));
	year >> y;
	std::istringstream month(befor.substr(5, 7));
	month >> m;
	std::istringstream day(befor.substr(8, 10));
	day >> d;
	if((y < 2009 || y > 2022) || (d < 1 || d > 31) || (m < 1 || m > 12))
	{
		std::cout << "Error: Adjust the date format." << std::endl;
		return(0);
	}
	return(1);
}

int	ft_check_date_format(std::string &befor)
{
	size_t	i = 0;
	befor.erase(std::remove(befor.begin(), befor.end(), ' '));
	if(befor.size() != 10)
		return(0);
	else if(befor[4] != '-' || befor[7] != '-')
		return(0);
	while(i < befor.size())
	{
		if(befor[i] == '-')
			i++;
		else
			if(!isdigit(befor[i]))
				return(0);
		i++;
	}
	return(1);
}

int	ft_check_after(std::string &after)
{
	size_t	i = 0;
	int		p = 0;

	after.erase(std::remove(after.begin(), after.end(), ' '));
	if(after.size() > 7)
	{
		std::cout << "Error: Too large number." << std::endl;
		return(0);
	}
	while (i < after.size())
	{
		if(after[i] == '.' && p == 0)
		{
			i++;
			p++;
		}
		if(!isdigit(after[i]))
		{
			std::cout << "Error: Value can only be positive digits." << std::endl;
			return(0);
		}
		i++;
	}
	return(1);
}

void	ft_add_to_class(BitcoinExchange &map_input, std::string &befor, std::string &after)
{
	double				after_value;
	std::istringstream	atoi(after);
	atoi >> after_value;
	map_input.set_class(befor, after_value);
}

void	ft_calculate_price(cont &map_csv, BitcoinExchange &map_input)
{
	cont::iterator iter;

	iter = map_csv.lower_bound(map_input.get_key());
	if(iter->first != map_input.get_key() && iter != map_csv.begin())
		iter--;
	std::cout << map_input.get_key() << " ==> " << map_input.get_value() << " = " << map_input.get_value() * iter->second << std::endl;
}

int	ft_parss_input(cont &map_csv, BitcoinExchange &map_input, std::string &befor, std::string &after)
{
	if(!ft_check_date_format(befor))
	{
		std::cout << "Error: Adjust the date format." << std::endl;
		return(0);
	}
	if(!ft_check_date_value(befor))
		return(0);
	if(!ft_check_after(after))
		return(0);
	ft_add_to_class(map_input, befor, after);
	ft_calculate_price(map_csv, map_input);
	return(1);
}

void	parsing_file(cont &map_csv, BitcoinExchange &map_input, char *av)
{
	std::fstream	file;
	std::string		line;
	std::string		befor;
	std::string		after;
	std::string		delim = "|";

	file.open(av);
	if(file.fail())
	{
		std::cout << "Error: could not open file." << std::endl;
		return;
	}
	while(std::getline(file, line))
	{
		befor = line.substr(0, line.find(delim));
		after = line.substr(line.find(delim) + 1, line.size());

		ft_parss_input(map_csv, map_input ,befor, after);
	}
}

void	ft_add_csv_map(cont &map_csv, std::string &befor, std::string &after)
{
	double							value;
	std::pair<std::string, double>	pr;
	std::istringstream atoi(after);
	atoi >> value;
	pr.first = befor;
	pr.second = value;
	map_csv.insert(pr);
	// std::cout << "befor ==== " << befor << " value == " << value << std::endl;
}

void	reading_file(cont &map_csv)
{
	std::fstream    csv_file;
	std::string		after;
	std::string		before;
	std::string		delim = ",";

	csv_file.open("data.csv");
	if(csv_file.fail()) 
		throw std::invalid_argument("Error: could not open file.");
	while(std::getline(csv_file, before, delim[0]))
	{
		std::getline(csv_file, after);
		ft_add_csv_map(map_csv, before, after);
	}
}

#endif