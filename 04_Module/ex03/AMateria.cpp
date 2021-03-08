#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	_type = type;
	_xp = 0;
}

AMateria::AMateria(const AMateria &obj)
{
	*this = obj;
}

AMateria &AMateria::operator= (const AMateria &obj)
{
	this->_xp = obj._xp;
	this->_type = obj._type;
	return (*this);
}
