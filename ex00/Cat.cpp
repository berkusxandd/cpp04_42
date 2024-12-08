#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal("Cat")
{
	this->type = "Cat";
}

Cat::~Cat()
{
}

Cat::Cat(Cat const &src) : Animal(src)
{
	*this = src;
}

Cat &Cat::operator=(Cat const &src)
{
	if (this != &src)
	{
		this->type = src.getType();
	}
	return (*this);
}

void Cat::makeSound()
{
	std::cout << "meow meow" << std::endl;
}

