#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H
# include <string>
# include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap( FragTrap const & src );
	~FragTrap();
	FragTrap &	operator=( FragTrap const & rhs );

	void vaulthunter_dot_exe(std::string const & target);

};

#endif