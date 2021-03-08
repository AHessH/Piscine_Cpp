#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    this->_count = 0;
    for (int i = 0; i < 4; i += 1)
    {
        this->_materia[i] = NULL;
    }
    return ;
}

MateriaSource::MateriaSource(MateriaSource const  &obj)
{
	*this = obj;
}

void        MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_count < 3)
	{
		this->_materia[this->_count] = materia;
		this->_count++;
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    if (type == "ice")
    {
        return (new Ice());
    }
    else if (type == "cure")
    {
        return (new Cure());
    }
    return (NULL);
}

MateriaSource &MateriaSource::operator= (const MateriaSource &obj)
{
	for (int i = 0; i < 4; i += 1)
	{
	    this->_materia[i] = NULL;
	    this->_materia[i] = obj._materia[0]->clone();
	}
	this->_count = obj._count;

	return (*this);
}
