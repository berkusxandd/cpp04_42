#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"
class AMateria
{

    protected:
        std::string _type;
    public:
        AMateria(); //Default constructor class
        AMateria(std::string const type);
        AMateria(AMateria const &src);
        AMateria &operator=(AMateria const &src);
        virtual ~AMateria();
        std::string const &getType() const;
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);

};    

#endif