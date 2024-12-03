#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
class Dog : public AAnimal
{
	public:
		Dog();
		~Dog();
		Dog(Dog const &src);
		Dog &operator= (Dog const &src);
		void makeSound();
		Brain *getBrain();
	private:
		std::string type;
		Brain *brain;
};

#endif