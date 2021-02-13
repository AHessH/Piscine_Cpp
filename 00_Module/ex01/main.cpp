#include "Contact.hpp"
#include <vector>

void	search(std::vector <Contact> contact_list)
{
	std::vector <Contact>::iterator it;
	std::cout.fill(' ');
	std::cout.width(10);
	for (it = contact_list.begin() ; it < contact_list.end(); ++it)
	{
		std::cout << "|";
		std::cout << it->get_index();
		std::cout << "|";
		std::cout << it->get_first_name();
		std::cout << "|";
		std::cout << it->get_second_name();
		std::cout << "|";
		std::cout << it->get_nickname();
	}
}

int		main(void)
{
	std::vector <Contact>	contact_list;
	std::string				command;
	uint					index;

	index = 0;
	while (true)
	{
		std::cout << "Enter command: ";
		std::cin >> command;
		if (command == "ADD")
			contact_list.push_back(Contact(++index));
		else if (command == "EXIT")
			break ;
		else if (command == "SEARCH")
			search(contact_list);
		else
			std::cout << "Wrong command name! Correct command list:\n\
				ADD	- Add a contact to the contact list\n\
				EXIT	- Exit the program\n\
				SEARCH	- Display the list of contacts and search for the required\n";
	}	
	return (0);
}
