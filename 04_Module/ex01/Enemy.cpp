#include "Enemy.hpp"

Enemy::Enemy(Enemy const &obj)
{
	*this = obj;
}

Enemy::Enemy(int hp, std::string const & type)
{
	_hp = hp;
	_type = type;
}

void Enemy::takeDamage(int damage)
{
	_hp -= damage;
}

Enemy &Enemy::operator=(Enemy const &obj)
{
	this->_hp = obj._hp;
	this->_type = obj._type;
	return (*this);
}
