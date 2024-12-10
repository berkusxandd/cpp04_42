/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:43:29 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:43:30 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

