#ifndef __SORCERER_HPP
#define __SORCERER_HPP

#include <iostream>
#include <string>

#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;

	public:
		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &obj);
		~Sorcerer();
		
		std::string get_name(void) const {return (_name);};
		std::string get_title(void) const {return (_title);};
		void set_name(std::string name) {_name = name;};
		void set_title(std::string title) {_title = title;};
		
		Sorcerer &operator=(Sorcerer const &obj);

		void polymorph(Victim const &) const;
		void polymorph(Peon const &) const;

};

std::ostream &operator<<(std::ostream &out, Sorcerer const &obj);

#endif
