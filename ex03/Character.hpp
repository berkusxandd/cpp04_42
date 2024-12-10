/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:30 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:54:31 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
class Character : public ICharacter
{
    protected:
        static const int    _inventorySize = 4;
        AMateria            *_inventory[_inventorySize];
        std::string         _name;
    public:
        Character();
        Character(std::string const &name);
        Character(Character const &src);
        Character           &operator=(Character const &src);
        ~Character();
        const std::string	&getName() const;
	    void				equip(AMateria *m);
	    void				unequip(int idx);
	    void				use(int idx, ICharacter &target);
        void                initInventory();
};

#endif
