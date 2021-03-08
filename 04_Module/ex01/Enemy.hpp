#ifndef __ENEMY_HPP
#define __ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	protected:
		std::string _type;
		int	_hp;
	public:
		Enemy() {};
		Enemy(Enemy const &);
		Enemy(int hp, std::string const & type);
		virtual ~Enemy() {};
		Enemy &operator=(Enemy const &);

		std::string getType() const {return (_type);};
		int getHP() const {return (_hp);};
		virtual void takeDamage(int);

};

#endif
