#include <iostream>

class Contact
{

	public:
		Contact(uint index);
		uint		get_index(){return (index);};
		std::string get_first_name(){return (first_name);};
		std::string get_second_name(){return (second_name);};
		std::string get_nickname(){return (nickname);};

	private:
		uint		index;
		std::string	first_name;
		std::string	second_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;
		std::string	take_data(void);
};