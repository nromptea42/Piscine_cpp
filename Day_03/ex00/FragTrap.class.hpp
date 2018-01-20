#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H
# include <string>

class FragTrap {

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap( FragTrap const & src );
	~FragTrap();
	FragTrap &	operator=( FragTrap const & rhs );

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void vaulthunter_dot_exe(std::string const & target);

private:
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