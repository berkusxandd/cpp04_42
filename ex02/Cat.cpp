#include "Cat.hpp"

#include <iostream>

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat CONSTRUCTOR called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat DESTRUCTOR called" << std::endl;
	delete (this->brain);
}

Cat::Cat(Cat const &src) : AAnimal(src)
{
	std::cout << "Cat COPY called" << std::endl;
	this->brain = new Brain();
	*this = src;
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Cat COPY ASSIGNMENT called" << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
		delete this->brain;
		this->brain = new Brain();
	}
	return (*this);
}

Brain *Cat::getBrain()
{
	return (this->brain);
}

void Cat::makeSound()
{
	std::cout << "meow meow" << std::endl;
}

