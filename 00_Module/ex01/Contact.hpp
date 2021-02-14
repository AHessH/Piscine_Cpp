# ifndef __contact_hpp
# define __contact_hpp
#include <iostream>
#include <iomanip>
#include <string>


class Contact
{

	public:
		Contact(){};
		Contact(uint index);
		uint		get_index()				const	{return (index);};
		std::string get_first_name()		const	{return (first_name);};
		std::string get_last_name()			const	{return (last_name);};
		std::string get_nickname()			const	{return (nickname);};
		std::string get_login()				const	{return (login);};
		std::string get_postal_address()	const	{return (postal_address);};
		std::string get_email_address()		const	{return (email_address);};
		std::string get_phone_number()		const	{return (phone_number);};
		std::string get_birthday_date()		const	{return (birthday_date);};
		std::string get_favorite_meal()		const	{return (favorite_meal);};
		std::string get_underwear_color()	const	{return (underwear_color);};
		std::string get_darkest_secret()	const	{return (darkest_secret);};

	private:
		uint		index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;
};

#endif
