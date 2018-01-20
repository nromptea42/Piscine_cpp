#ifndef RADSCORPION_CLASS_H
# define RADSCORPION_CLASS_H
# include "Enemy.class.hpp"
# include <string>

class RadScorpion : public Enemy {
public:

	RadScorpion(void);
	RadScorpion( RadScorpion const & src );
	~RadScorpion();
	RadScorpion &	operator=( RadScorpion const & rhs );

};

#endif