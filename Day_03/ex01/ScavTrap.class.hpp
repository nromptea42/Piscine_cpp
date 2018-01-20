#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H
# include <string>

class ScavTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap( ScavTrap const & src );
	~ScavTrap();
	ScavTrap &	operator=( ScavTrap const & rhs );

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void challengeNewcomer();

protected:
	std::string _name;
	unsigned int _hp;
	unsigned int _maxHp;
	unsigned int _ep;
	unsigned int _maxEp;
	unsigned int _lvl;
	int _meleeDamage;
	int _rangeDamage;
	int _armor;
};

#endif