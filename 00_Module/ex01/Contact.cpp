#include "Contact.hpp"

Contact::Contact(uint index)
{
	this->index = index;
	std::cout << "Enter first name: ";
	std::cin >> first_name;
	std::cout << "Enter second name: ";
	std::cin >> last_name;
	std::cout << "Enter nickname: ";
	std::cin >> nickname;
	std::cout << "Enter login: ";
	std::cin >> login;
	std::cout << "Enter postal address: ";
	std::cin >> postal_address;
	std::cout << "Enter email address: ";
	std::cin >> email_address;
	std::cout << "Enter phone number: ";
	std::cin >> phone_number;
	std::cout << "Enter birthday date: ";
	std::cin >> birthday_date;
	std::cout << "Enter favorite meal: ";
	std::cin >> favorite_meal;
	std::cout << "Enter underwear color: ";
	std::cin >> underwear_color;
	std::cout << "Enter darkest secret: ";
	std::cin >> darkest_secret;
}
