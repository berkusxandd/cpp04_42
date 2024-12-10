/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:35 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:54:36 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"
#include <iostream>
Ice::Ice(void): AMateria("ice")
{
}

Ice::Ice(const Ice &src): AMateria(src)
{
    (void)src;
}

Ice::~Ice()
{

}

Ice	&Ice::operator =(const Ice &src)
{
	(void) src;
	return *this;
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
