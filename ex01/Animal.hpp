#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(Animal const &src);
		Animal &operator=(Animal const &src);

		std::string getType() const;
		virtual void makeSound();
};

#endif
