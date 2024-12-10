/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:16 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:54:17 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
class Cat : public AAnimal
{
	public:
		Cat();
		~Cat();
		Cat(Cat const &src);
		Cat &operator= (Cat const &src);
		void makeSound();
		Brain *getBrain();
	private:
		std::string type;
		Brain *brain;

};

#endif
