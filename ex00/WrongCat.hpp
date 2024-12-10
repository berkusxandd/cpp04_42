/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:53:44 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:53:45 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat : public Animal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &src);
		WrongCat &operator= (WrongCat const &src);
		void makeSound();
	private:
		std::string type;

};

#endif
