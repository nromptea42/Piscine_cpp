#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H

class ClapTrap {

public:

	ClapTrap(void);
	ClapTrap(std::string name, unsigned int _hp, unsigned int _maxHp, unsigned int _ep, unsigned int _maxEp, unsigned int lvl, unsigned int _meleeDamage, unsigned int _rangeDamage, unsigned int _armor);
	ClapTrap( ClapTrap const & src );
	~ClapTrap();
	ClapTrap &	operator=( ClapTrap const & rhs );

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

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