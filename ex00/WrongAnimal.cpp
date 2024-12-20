/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:43:40 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:43:40 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : type("unknown")
{
	std::cout << "Wrong Animal CONSTRUCTOR called, type: " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "Wrong Animal CONSTRUCTOR called, type: " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal DECONSTRUCTOR called, type: " << this->type << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "Wrong Animal COPY constructor called, type: " << this->type << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << "Wrong Animal COPY OVERLOAD called, type: "<< this->type << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return (*this);
}

void WrongAnimal::makeSound()
{
	std::cout << "*wrong animal noises*" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}



