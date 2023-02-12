#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string ph_num;
	std::string secret;
	public :
		void	set(std::string type, std::string str)
		{
			if(type == "f_name")
				f_name = str;
			else if(type == "l_name")
				l_name = str;
			else if(type == "n_name")
				n_name = str;
			else if(type == "ph_num")
				ph_num = str;
			else if(type == "secret")
				secret = str;
		}
		std::string get(std::string type)
		{
			if(type == "f_name")
				return(f_name);
			else if(type == "l_name")
				return(l_name);
			else if(type == "n_name")
				return(n_name);
			else if(type == "ph_num")
				return(ph_num);
			else if(type == "secret")
				return(secret);
			return(0);
		}
};

#endif