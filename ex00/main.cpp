/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:43:38 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:43:39 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Animal *bird = new Animal("bird");
	Cat *cat = new Cat();
	Dog *dog = new Dog();
	WrongCat *wrongCat = new WrongCat();
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << bird->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;


	bird->makeSound();
	dog->makeSound();
	cat->makeSound();
	wrongCat->makeSound();

	delete bird;
	delete wrongCat;
	delete dog;
	delete cat;
}
