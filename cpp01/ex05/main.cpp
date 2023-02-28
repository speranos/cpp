#include "Harl.hpp"

int main()
{
	Harl	cmd;

	cmd.complain("DEBUG");
	cmd.complain("INFO");
	cmd.complain("WARNING");
	cmd.complain("ERROR");
	cmd.complain("warning");
	cmd.complain("info");
	cmd.complain("errrrr");
	cmd.complain("error");
	cmd.complain("");

}