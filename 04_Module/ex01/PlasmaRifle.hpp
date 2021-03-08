#ifndef __PLASMA_RIFLE_HPP
#define __PLASMA_RIFLE_HPP

#include <iostream>
#include <string>

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &);
		PlasmaRifle(std::string const & name, int apcost, int damage);
		~PlasmaRifle();
		PlasmaRifle &operator=(PlasmaRifle const &);

		void attack() const;

};

#endif
