#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if(ac == 2)
	{
		BitcoinExchange map_input;
		cont	map_csv;
		reading_file(map_csv);
		parsing_file(map_csv, map_input, av[1]);
	}
	else
	{
		std::cout << "Error: Could not open file." << std::endl;
		return(0);
	}
}

//empty value
//value betwene 0 && 1000
//empty file for input
//empty file for csv
//csv file not fouand
//skip new line if it's possible