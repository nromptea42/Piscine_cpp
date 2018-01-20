#ifndef POWERFIST_CLASS_H
# define POWERFIST_CLASS_H
# include "AWeapon.class.hpp"
# include <string>

class PowerFist : public AWeapon {
public:

	PowerFist(void);
	PowerFist(std::string const name, int damage, int apcost);
	PowerFist( PowerFist const & src );
	~PowerFist();
	PowerFist &	operator=( PowerFist const & rhs );

	void attack(void) const;

};

#endif