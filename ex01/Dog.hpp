/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:01 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:54:02 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog const &src);
		Dog &operator= (Dog const &src);
		void makeSound();
		Brain *getBrain();
	private:
		std::string type;
		Brain *brain;
};

#endif
