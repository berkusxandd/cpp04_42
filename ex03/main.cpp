/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:43 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:54:44 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <string>
int main()
{
    IMateriaSource* src = new MateriaSource();
    Ice *ice = new Ice();
    Cure *cure = new Cure();
    //test for learned materia capacity, cannot be more than 4
    src->learnMateria(ice);
    src->learnMateria(cure);
    src->learnMateria(ice);
    src->learnMateria(cure);
    src->learnMateria(ice);  //5th one, should write warning to the console.

    ICharacter* me = new Character("me");
    ICharacter* const bob = new Character("bob");
    AMateria *tmp;
    tmp = src->createMateria("portalgun");  // unknown materia
    bob->equip(tmp);
    bob->use(0, *me);
    tmp = src->createMateria("ice");
    bob->equip(tmp);
    bob->use(0,*me);
    bob->unequip(0);
    bob->unequip(10); // out of border unequip
    bob->use(10,*me); // out of border use

    delete tmp;
    delete bob;
    delete me;
    delete src;
    delete ice;
    delete cure;
    return 0;
}
