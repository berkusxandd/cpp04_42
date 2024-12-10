/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:43:33 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:43:34 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog")
{
	this->type = "Dog";
}

Dog::~Dog()
{
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

