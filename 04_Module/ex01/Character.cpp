#include "Character.hpp"

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (_weapon != NULL && enemy != NULL)
	{
		if (_ap >= _weapon->getAPCost())
		{
			std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
			_weapon->attack();
			enemy->takeDamage(_weapon->getDamage());
			_ap -= _weapon->getAPCost();
			if (_ap < 0)
				_ap = 0;
			if (enemy->getHP() <= 0)
			{
				enemy->~Enemy();
				delete enemy;
			}
		}
		else
			std::cout << "Your character don't have ap!" << std::endl;
	}
	else if (_weapon == NULL)
		std::cout << "Your character don't have weapon!" << std::endl;
	else if (enemy == NULL)
		std::cout << "Not a valid enemy!" << std::endl;
}
Character::Character()
{
	Character("No Name");
}

Character::Character(Character const &character)
{
	*this = character;
}


Character::Character(std::string const & name)
{
	_name = name;
	_ap = 40;
	_weapon = NULL;
}

Character::~Character()
{
}

std::string Character::get_weapon_name() const 
{
	if (_weapon != NULL)
		return (_weapon->getName());
	return ("");
};


Character &Character::operator=(Character const &character)
{
	this->_name = character._name;
	this->_ap = character._ap;
	this->_weapon = character._weapon;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Character const &obj)
{
	if (obj.get_weapon_name() != "")
		out << obj.getName() << " has " << obj.get_ap() << " AP and wields a " << obj.get_weapon_name() << std::endl;
	else
		out << obj.getName() << " has " << obj.get_ap() << " AP and unarmed" << std::endl;
	return (out);
}
