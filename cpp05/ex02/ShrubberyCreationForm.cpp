#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 0, 0)
{
	target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target_up) : AForm(target_up, 145, 137)
{
	target = target_up;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy)
{
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator= (ShrubberyCreationForm &copy)
{
	target = copy.target;
	return(*this);
}

void ShrubberyCreationForm::ft_execute(Bureaucrat const &executor) const
{
	if(get_sign() && executor.getGrade() <= get_sign_grade())
	{
		std::ofstream outfile (target);
		outfile << "    oxoxoo    ooxoo" << std::endl;
		outfile << "  ooxoxo oo  oxoxooo" << std::endl;
		outfile << " oooo xxoxoo ooo ooox" << std::endl;
		outfile << " oxo o oxoxo  xoxxoxo" << std::endl;
		outfile << "  oxo xooxoooo o ooo" << std::endl;
		outfile << "    ooo\oo\  /o/o" << std::endl;
		outfile << "        \  \/ /" << std::endl;
		outfile << "         |   /" << std::endl;
		outfile << "         |  |" << std::endl;
		outfile << "         |  |" << std::endl;
		outfile << "         |  |" << std::endl;
		outfile << "         |  |" << std::endl;
		outfile << "  ______/____\____" << std::endl;
		outfile.close();
	}
	else
		std::cout << "WAAAAAAA" << std::endl;
}