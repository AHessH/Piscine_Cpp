#ifndef _CHARACTER_HPP
#define _CHARACTER_HPP

#define MAX_COUNT 4

#include <iostream>
#include <string>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		AMateria *_materia[MAX_COUNT];
		std::string _name;
		unsigned int _count;

	public:
		Character();
		Character(std::string name);
		Character(Character const &character);
		~Character() {};

		virtual std::string const & getName() const {return (_name);};
		virtual void equip(AMateria *m);
		virtual void use(int index, ICharacter& target);
		virtual void unequip(int idx);

		Character &operator=(Character const &obj);

};

#endif
