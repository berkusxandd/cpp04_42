#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(const Ice &src);
	Ice		&operator =(const Ice &src);

	virtual	~Ice();

	AMateria		*clone() const;
	void	use(ICharacter &target);
};

#endif