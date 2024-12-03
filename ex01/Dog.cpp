#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog")
{
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete (this->brain);
}

Dog::Dog(Dog const &src) : Animal(src)
{
	*this = src;
}

Dog &Dog::operator=(Dog const &src)
{
	if (this != &src)
	{
		this->type = src.getType();
	}
	return (*this);
}

void Dog::makeSound()
{
	std::cout << "woof woof" << std::endl;
}

