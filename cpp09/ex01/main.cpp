#include "RPN.hpp"

void	do_math(size_t index, stack &my_stack)
{
	int	current_num = my_stack.top();
	my_stack.pop();
	int	previous_num = my_stack.top();
	my_stack.pop();
	// std::cout << "current >>>>>>>>>>>>> " << current_num << std::endl;
	// std::cout << "prev >>>>>>>>>>>>>>>> " << previous_num << std::endl;
	// std::cout << "size =================== " << my_stack.size() << std::endl;
	switch (index)
	{
	case 0:
		my_stack.push(previous_num + current_num);
		break;
	case 1:
		my_stack.push(previous_num - current_num);
		break;
	case 2:
		if(current_num > 0)
			my_stack.push(previous_num / current_num);
		else
			throw std::invalid_argument("ERROR: Cant devide by 0");
		break;
	case 3:
		my_stack.push(previous_num * current_num);
		break;
	}
	// std::cout << my_stack.top() << std::endl;
}

int	isoperator(char c, stack &my_stack)
{
	std::string operators = "+-/*";
	size_t		i = 0;
	bool		find = false;

	while(i < operators.size())
	{
		if(operators[i] == c && my_stack.size() > 1)
		{
			// std::cout << "size =================== " << my_stack.size() << std::endl;
			// std::cout << "c ====================== " << c << std::endl;
			do_math(i,my_stack);
			find = true;
			break;
		}
		i++;
	}
	if(!find)
		return(0);
	return(1);
}

int	ctoi(char c)
{
	return(c - 48);
}

void	ft_add(char c, stack &my_stack)
{
	if(c <= 32)
		return;
	if(isdigit(c))
		my_stack.push(ctoi(c));
	else if(!isoperator(c, my_stack))
		throw std::invalid_argument("ERROR: Invalide operator. ");
}

int main(int ac, char **av)
{
	try
	{
		stack	my_stack;
		int		i = 0;
		if(ac == 2)
			while(av[1][i])
				ft_add(av[1][i++], my_stack);
		else
			std::cout << "Error: More or less argument required." << std::endl;
		std::cout << my_stack.top() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}