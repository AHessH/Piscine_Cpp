#ifndef __CLAP_TRAP_HPP
#define __CLAP_TRAP_HPP

#include <string>
#include <iostream>
#include <stdlib.h>

class ClapTrap
{
	private:
		std::string	_name;
		unsigned int _hit_points;
		unsigned int _max_hit_points;
		unsigned int _energy_points;
		unsigned int _max_energy_points;
		unsigned int _level;
		unsigned int _melee_attack_damage;
		unsigned int _ranged_attack_damage;
		unsigned int _armor_damage_reduction;
		void set_params();

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &robo);
		~ClapTrap();
		ClapTrap &operator=(ClapTrap const &robo);
	//set func
		void set_name(std::string name) {_name = name;};
		void set_hit_points(unsigned int hp) {_hit_points = hp;};
		void set_max_hit_points(unsigned int mhp) {_max_hit_points = mhp;};
		void set_energy_points(unsigned int ep) {_energy_points = ep;};
		void set_max_energy_points(unsigned int mep) {_max_energy_points = mep;};
		void set_level(unsigned int level) {_level = level;};
		void set_melee_attack_damage(unsigned int damage) {_melee_attack_damage = damage;};
		void set_ranged_attack_damage(unsigned int damage) {_ranged_attack_damage = damage;};
		void set_armor_damage_reduction(unsigned int armor) {_armor_damage_reduction = armor;};
	//get func
		std::string get_name(void) const {return (_name);};
		unsigned int get_hit_points(void) const {return (_hit_points);};
		unsigned int get_max_hit_points(void) const {return (_max_hit_points);};
		unsigned int get_energy_points(void) const {return (_energy_points);};
		unsigned int get_max_energy_points(void) const {return (_max_energy_points);};
		unsigned int get_level(void) const {return (_level);};
		unsigned int get_melee_attack_damage(void) const {return (_melee_attack_damage);};
		unsigned int get_ranged_attack_damage(void) const {return (_ranged_attack_damage);};
		unsigned int get_armor_damage_reduction(void) const {return (_armor_damage_reduction);};
};

#endif
