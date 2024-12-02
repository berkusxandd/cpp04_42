#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : Animal("Cat")
{
	this->type = "Cat";
}

WrongCat::~WrongCat()
{
}

WrongCat::WrongCat(WrongCat const &src) : Animal(src)
{
	*this = src;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
	if (this != &src)
	{
		this->type = src.getType();
	}
	return (*this);
}

void WrongCat::makeSound()
{
	std::cout << "pspsps" << std::endl;
}

