/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:32 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:54:33 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>
Cure::Cure(void): AMateria("cure")
{
}

Cure::Cure(const Cure &src): AMateria(src)
{
    (void)src;
}

Cure::~Cure()
{

}

Cure	&Cure::operator =(const Cure &src)
{
	(void) src;
	return *this;
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
