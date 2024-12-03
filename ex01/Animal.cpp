#include "Animal.hpp"

#include <iostream>

Animal::Animal() : type("unknown")
{
	std::cout << "Animal CONSTRUCTOR called, type: " << this->type << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal CONSTRUCTOR called, type: " << this->type << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal DECONSTRUCTOR called, type: " << this->type << std::endl;
}
Animal::Animal(Animal const &src)
{
	std::cout << "Animal COPY constructor called, type: " << this->type << std::endl;
	*this = src;
}

Animal &Animal::operator=(Animal const &src)
{
	std::cout << "Animal COPY OVERLOAD called, type: "<< this->type << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return (*this);
}

void Animal::makeSound()
{
	std::cout << "*unknown animal noises*" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}



