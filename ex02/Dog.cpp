/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:18 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:54:19 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog() : AAnimal("Dog")
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

Dog::Dog(Dog const &src) : AAnimal(src)
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
		AAnimal::operator=(src);
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

