#ifndef ENEMIES_CLASS_H
# define ENEMIES_CLASS_H
# include <string>
# include "AGameObject.class.hpp"

class Enemies : public AGameObject {

	public:

		Enemies(void);
		Enemies( Enemies const & src );
		virtual ~Enemies(void);

		Enemies &	operator=( Enemies const & rhs );

		void 				up();
		void 				down();
		void 				left();
		void 				right();

};

#endif