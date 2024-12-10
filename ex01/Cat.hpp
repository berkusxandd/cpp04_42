/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:53:57 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:53:58 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
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
