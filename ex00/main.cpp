#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
int main()
{
	Animal *bird = new Animal("bird");
	WrongAnimal *wrong = new WrongAnimal("falan");
	Dog *dog = new Dog();
	Cat *cat = new Cat();

	bird->makeSound();
	dog->makeSound();
	cat->makeSound();
	wrong->makeSound();

	delete bird;
	delete wrong;
	delete dog;
	delete cat;
}
