/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:24 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:54:25 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() : _type("")
{
    std::cout << "new ameteria created" << std::endl;
}

AMateria::AMateria(std::string type) : _type(type)
{
}

AMateria::AMateria(AMateria const &src)
{
    *this = src;
}

AMateria &AMateria::operator=(AMateria const &src)
{
    if (this != &src)
    {
        _type = src._type;
    }
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "ameteria destroyed" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}
