#include <iostream>
#include <string.h>

int main(int ac, char **str)
{
	int str_num = 1;
	int i = 0;

	while(str_num < ac)
	{
		while(str[str_num][i])
		{
			str[str_num][i] = toupper(str[str_num][i]);
			i++;
		}
		i = 0;
		std::cout << str[str_num];
		str_num++;
	}
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}