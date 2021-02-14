#include "Contact.hpp"

#define MAX_SIZE 10

std::string	cut_str(std::string str)
{
	if (str.size() >= 10)
	{
		str.resize(9);
		str.resize(10, '.');
	}
	return (str);
}

void	print_short_info(const Contact *contact_list, const uint &size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << (contact_list[i].get_index()) << std::setfill(' ');
		std::cout << "|";
		std::cout.width(10);
		std::cout << cut_str(contact_list[i].get_first_name()) << std::setfill(' ');
		std::cout << "|";
		std::cout.width(10);
		std::cout << cut_str(contact_list[i].get_last_name()) << std::setfill(' ');
		std::cout << "|";
		std::cout.width(10);
		std::cout << cut_str(contact_list[i].get_nickname()) << std::setfill(' ');
		std::cout << "|" << std::endl;
	}
}

std::ostream& operator<<(std::ostream &out, const Contact& contact)
{
	out << "index is           - " << contact.get_index() << std::endl;
	out << "first name is      - " << contact.get_first_name() << std::endl;
	out << "last name is       - " << contact.get_last_name() << std::endl;
	out << "nickname is        - " << contact.get_nickname() << std::endl; 
	out << "login is           - " << contact.get_login() << std::endl;
	out << "postal address is  - " << contact.get_postal_address() << std::endl;
	out << "email address is   - " << contact.get_email_address() << std::endl; 
	out << "phone_number is    - " << contact.get_phone_number() << std::endl;
	out << "birthday date is   - " << contact.get_birthday_date() << std::endl; 
	out << "favorite meal is   - " << contact.get_favorite_meal() << std::endl; 
	out << "underwear color is - " << contact.get_underwear_color() << std::endl; 
	out << "darkest secret is  - " << contact.get_darkest_secret() << std::endl;
	return (out);
}

int		main(void)
{
	Contact					contact_list[MAX_SIZE];
	std::string				command;
	uint					index;
	uint					user_index;

	index = 0;
	while (true)
	{
		std::cout << "Enter command: ";
		std::cin >> command;
		if (command == "ADD")
		{
			contact_list[index] = Contact(index + 1);
			index++;
		}
		else if (command == "EXIT")
			break ;
		else if (command == "SEARCH")
		{
			if (!index)
			{
				std::cout << "Empty contact list!" << std::endl;
				continue ;
			}
			print_short_info(contact_list, index);
			std::cout << "Enter index: ";
			std::cin >> user_index;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(32000,'\n');
				std::cout << "Not a valid argument!" << std::endl;
			}
			else if (user_index > index)
				std::cout << "Wrong contact index, contact list have only " << index << " contacts" << std::endl;
			else
				std::cout << contact_list[user_index - 1];
		}
		else
			std::cout << "Wrong command name!\nCorrect command list:\n"
					<< " -\t   ADD	- Add a contact to the contact list\n"\
					<< " -\t  EXIT	- Exit the program\n"\
					<< " -\tSEARCH	- Display the list of contacts and search for the required\n";
	}
	return (0);
}
