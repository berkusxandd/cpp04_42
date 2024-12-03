#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
class Cat : public AAnimal
{
	public:
		Cat();
		~Cat();
		Cat(Cat const &src);
		Cat &operator= (Cat const &src);
		void makeSound();
		Brain *getBrain();
	private:
		std::string type;
		Brain *brain;

};

#endif
