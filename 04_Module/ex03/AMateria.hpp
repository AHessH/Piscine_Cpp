#ifndef _A_MATERIA_HPP
#define _A_MATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		unsigned int _xp;
		std::string _type;

	public:
		AMateria(void) {};
		AMateria(const std::string &type);
		AMateria(const AMateria &src);
		virtual ~AMateria() {};

		virtual AMateria *clone(void) const = 0;
		virtual void use(ICharacter &target) = 0;

		unsigned int getXP(void) const {return (_xp);};
		const std::string &getType(void) const {return (_type);};

		AMateria &operator=(const AMateria &obj);
};

#endif
