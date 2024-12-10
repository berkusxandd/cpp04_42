#include "Character.hpp"

#include <iostream>
void Character::initInventory()
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character() : _name("unnamed")
{
    this->initInventory();
}

Character::Character(std::string const &name) : _name(name)
{
    std::cout << "new character created" << std::endl;
    this->initInventory();
}

Character::Character(Character const &src)
{
    (*this) = src;
}

Character & Character::operator=(Character const &src)
{
    if (this != &src)
    {
        this->_name = src._name;
		for (int i = 0; i < this->_inventorySize; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
    }
    return (*this);
}

Character::~Character()
{
    std::cout << "new character destroyed" << std::endl;
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
}

const std::string & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    if (m == NULL)
    {
        std::cout << "unallowed materia has been equiped." << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            std::cout << "Character -" << this->getName() << "- equipped " << m->getType() << std::endl;
            return;
        }
    }
    std::cout << "Character -" << this->getName() << "- cannot equip " << m->getType() << " because of full inventory" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < this->_inventorySize)
	{
		std::cout << this->_name << " unequips " << this->_inventory[idx]->getType() << " (" << idx << ")" << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < this->_inventorySize && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << this->_name << " didn't do anything" << std::endl;

}
