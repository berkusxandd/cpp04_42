/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:45 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:54:46 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0)
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    *this = src;
}

MateriaSource& MateriaSource:: operator=(const MateriaSource &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
        {
            delete _materias[i];
            _materias[i] = src._materias[i] ? src._materias[i]->clone() : NULL;
        }
        _count = src._count;
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->_materias[i])
            delete this->_materias[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m || _count >= 4)
    {
        std::cerr << "cannot learn more materias." << std::endl;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] == NULL)
        {
            _materias[i] = m->clone();
            _count++;
            return;
        }
    }
}

AMateria * MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] && _materias[i]->getType() == type)
            return _materias[i]->clone();
    }
    return NULL;
}
