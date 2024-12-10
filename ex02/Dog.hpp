/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:20 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:54:21 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
class Dog : public AAnimal
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
