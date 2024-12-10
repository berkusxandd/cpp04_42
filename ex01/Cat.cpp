/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:53:55 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:53:56 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal("Cat")
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

Cat::Cat(Cat const &src) : Animal(src)
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

