#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog CONSTRUCTOR called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog DESTRUCTOR called" << std::endl;
	delete (this->brain);
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Dog COPY called" << std::endl;
	this->brain = new Brain(*src.brain);
	*this = src;
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog COPY OPERATOR called" << std::endl;
	if (this != &src)
	{
		Animal::operator=(src);
		this->type = src.getType();
		delete this->brain;
		this->brain = new Brain();
	}
	return (*this);
}

Brain *Dog::getBrain()
{
	return (this->brain);
}

void Dog::makeSound()
{
	std::cout << "woof woof" << std::endl;
}

