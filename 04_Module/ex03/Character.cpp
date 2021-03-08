#include "Character.hpp"
#include "AMateria.hpp"
Character::Character()
{
	for (int i = 0; i < MAX_COUNT; i++)
		_materia[i] = NULL;
	_name = "";
	_count = 0;
}

Character::Character(std::string name)
{
	for (int i = 0; i < MAX_COUNT; i++)
		_materia[i] = NULL;
	_name = name;
	_count = 0;
}

Character::Character(Character const &character)
{
	*this = character;
}

void Character::equip(AMateria* m)
{
	if (_count < MAX_COUNT)
	{
		_materia[_count] = m;
		_count++;
	}
}

void Character::unequip(int idx)
{
	_materia[idx] = NULL;
}

Character &Character::operator=(Character const &obj)
{
	this->_count = obj._count;
	for (unsigned int i = 0; i < _count; i++)
		this->_materia[i] = obj._materia[i];
	this->_name = this->_name;

	return (*this);
}

void Character::use(int index, ICharacter &target)
{
    if ((unsigned int)index < this->_count)
    {
        this->_materia[index]->use(target);
    }
}
