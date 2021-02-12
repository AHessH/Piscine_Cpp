#include "contact.hpp"

std::string	Contact::take_data(void)
{
	std::string tmp;
	// int ls;

	// std::cin >> ls;
	std::getline(std::cin, tmp);
	// std::cout << ls << " tyt\n";
	if (tmp.size() > 10)
	{
		tmp.resize(9);
		tmp.resize(10, '.');
	}
	return (tmp);
}

Contact::Contact(uint index)
{
	this->index = index;
	std::cout << "Enter first name: ";
	first_name = take_data();
	
	// std::cout << "Enter second name: ";
	// second_name = take_data();
	// std::cout << "Enter nickname: ";
	// nickname = take_data();
	// std::cout << "Enter login: ";
	// login = take_data();
	// std::cout << "Enter postal address: ";
	// postal_address = take_data();
	// std::cout << "Enter email address: ";
	// email_address = take_data();
	// std::cout << "Enter phone number: ";
	// phone_number = take_data();
	// std::cout << "Enter birthday date: ";
	// birthday_date = take_data();
	// std::cout << "Enter favorite meal: ";
	// favorite_meal = take_data();
	// std::cout << "Enter underwear color: ";
	// underwear_color = take_data();
	// std::cout << "Enter darkest secret: ";
	// darkest_secret = take_data();
}

/*std::string Contact::get_first_name()
{
	return (first_name);
}

std::string Contact::get_second_name()
{
	return (second_name);
}

std::string Contact::get_nickname()
{
	return (nickname);
}*/