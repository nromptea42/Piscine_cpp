#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H
# include <string>
# include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap( ScavTrap const & src );
	~ScavTrap();
	ScavTrap &	operator=( ScavTrap const & rhs );

	void challengeNewcomer();
};

#endif