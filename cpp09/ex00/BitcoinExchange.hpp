#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>
#include <sstream>

typedef std::map<std::string, int> cont;

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
	if((y < 2009 || y > 2022) && (d < 1 || d > 31) && (m < 1 || m > 12))
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

void	ft_parss_input(cont &map, std::string &befor, std::string &after)
{
	(void)map;
	(void)after;
	if(!ft_check_date_format(befor))
	{
		std::cout << "Error: Adjust the date format." << std::endl;
		return;
	}
	if(!ft_check_date_value(befor))
		return;
	if(!ft_check_after(after))
		return;
}

void	parsing_file(cont &map, char *av)
{
	std::fstream	file;
	std::string		line;
	std::string		befor;
	std::string		after;
	std::string		delim = "|";
	(void)map;

	file.open(av);
	if(file.fail())
		throw std::invalid_argument("Error: could not open file.");
	while(std::getline(file, befor, delim[0]))
	{
		std::getline(file, after);
		ft_parss_input(map ,befor, after);
		std::cout << befor << std::endl;
	}
}

void	reading_file(int ac)
{
	if(ac != 2)
		throw std::invalid_argument("Error: More or less then the arguent requierd.");
	std::fstream    csv_file;
	std::string		file_data;
	std::string		line;
	csv_file.open("data.csv");
	if(csv_file.fail())
		throw std::invalid_argument("Error: could not open file.");
	while(!csv_file.eof())
	{
		csv_file >> line;
		file_data += line + "\n";
	}
}

#endif