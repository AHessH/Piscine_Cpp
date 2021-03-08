#ifndef __CHARACTER_HPP
#define __CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		int _ap;
		std::string _name;
		AWeapon *_weapon;

	public:
		Character();
		Character(Character const &character);
		Character(std::string const & name);
		~Character();

		Character &operator=(Character const &character);

		void recoverAP() {_ap += 10;};
		void equip(AWeapon*);
		void attack(Enemy*);

		std::string getName() const {return (_name);};
		std::string get_weapon_name() const;
		int get_ap() const {return (_ap);};
};

std::ostream &operator<<(std::ostream &out, Character const &obj);

#endif
