#ifndef AWEAPON_CLASS_H
# define AWEAPON_CLASS_H
# include <string>

class AWeapon {
private:
        std::string _name;
        int			_damage;
        int			_apcost;
public:
	AWeapon(void);
	AWeapon(std::string const & name, int damage, int apcost);
	AWeapon( AWeapon const & src );
	virtual ~AWeapon();
	AWeapon &	operator=( AWeapon const & rhs );

	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

};

#endif