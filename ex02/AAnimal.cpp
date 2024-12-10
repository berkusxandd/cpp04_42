/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:07 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:54:08 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

#include <iostream>

AAnimal::AAnimal() : type("unknown")
{
	std::cout << "AAnimal CONSTRUCTOR called, type: " << this->type << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << "AAnimal CONSTRUCTOR called, type: " << this->type << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal DECONSTRUCTOR called, type: " << this->type << std::endl;
}
AAnimal::AAnimal(AAnimal const &src)
{
	*this = src;
	std::cout << "AAnimal COPY constructor called, type: " << this->type << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
	std::cout << "AAnimal COPY OVERLOAD called, type: "<< this->type << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return (*this);
}

void AAnimal::makeSound()
{
	std::cout << "*unknown Aanimal noises*" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}



