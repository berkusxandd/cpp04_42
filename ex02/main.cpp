/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:21 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:54:22 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	// Animal animal;

	Dog *dog = new Dog();
	Dog dog1(*dog);
	Cat *cat = new Cat();
	Cat cat1 = *cat;
	std::cout << "<= SHALLOW OR DEEP COPY TEST =>" << std::endl;
	std::cout << "Dog's address " << dog->getBrain() << std::endl;
	std::cout << "Dog1's address " << dog1.getBrain() << std::endl;
	std::cout << "Cat's address " << cat->getBrain() << std::endl;
	std::cout << "Cat1's address " << cat1.getBrain() << std::endl;
	delete dog;
	delete cat;

	AAnimal *animals[100];

	for(int i=0;i<100;i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	animals[99]->makeSound();
	animals[0]->makeSound();

	for (int j=0;j<100;j++)
		delete animals[j];
}
