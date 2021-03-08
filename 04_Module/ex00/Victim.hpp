#ifndef __VICTIM_HPP
#define __VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
	private:
		std::string _name;

	public:
		Victim();
		Victim(std::string name);
		Victim(Victim const &obj);
		~Victim();
		
		std::string get_name(void) const {return (_name);};
		void set_name(std::string name) {_name = name;};
		
		Victim &operator=(Victim const &obj);

		void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &obj);

#endif
