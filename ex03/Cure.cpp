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
