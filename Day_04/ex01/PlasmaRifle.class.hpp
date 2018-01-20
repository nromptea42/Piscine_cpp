#ifndef PLASMARIFLE_CLASS_H
# define PLASMARIFLE_CLASS_H
# include "AWeapon.class.hpp"
# include <string>

class PlasmaRifle : public AWeapon {
public:

	PlasmaRifle(void);
	PlasmaRifle(std::string const name, int damage, int apcost);
	PlasmaRifle( PlasmaRifle const & src );
	~PlasmaRifle();
	PlasmaRifle &	operator=( PlasmaRifle const & rhs );

	void attack(void) const;

};

#endif