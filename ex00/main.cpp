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
#include <iostream>

int main()
{
	Animal *bird = new Animal("bird");
	WrongAnimal *wrong = new WrongAnimal("wrong");
	Dog *dog = new Dog();
	Cat *cat = new Cat();
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << wrong->getType() << std::endl;
	std::cout << bird->getType() << std::endl;

	bird->makeSound();
	dog->makeSound();
	cat->makeSound();
	wrong->makeSound();

	delete bird;
	delete wrong;
	delete dog;
	delete cat;
}
