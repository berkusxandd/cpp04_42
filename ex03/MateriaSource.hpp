#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
        private:
            AMateria* _materias[4];
            int _count;

        public:
            MateriaSource();
            MateriaSource(const MateriaSource &src);
            MateriaSource &operator=(const MateriaSource &src);
            ~MateriaSource();

            void learnMateria(AMateria *m);
            AMateria *createMateria(const std::string &type);
};
