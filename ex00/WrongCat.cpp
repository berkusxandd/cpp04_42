/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:53:42 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:53:43 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	this->type = "Cat";
}

WrongCat::~WrongCat()
{
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
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


