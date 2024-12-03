#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(std::string type);
		virtual ~AAnimal();
		AAnimal(AAnimal const &src);
		AAnimal &operator=(AAnimal const &src);

		std::string getType() const;
		virtual void makeSound() = 0;
};

#endif
