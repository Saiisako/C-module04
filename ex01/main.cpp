/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:59:58 by skock             #+#    #+#             */
/*   Updated: 2025/06/27 10:01:59 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	// TEST 1

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl;
	delete j;
	delete i;

	std::cout << std::endl;

	// TEST 2

	const int size = 10;
	Animal* animals[size];
	for (int i = 0; i < size / 2; ++i)
	{
		std::cout << i << " new Dog object" << std::endl;
		animals[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = size / 2; i < size; ++i)
	{
		std::cout << i << " new Cat object" << std::endl;
		animals[i] = new Cat();
		std::cout << std::endl;
	}
	for (int i = 0; i < size; ++i)
	{
		std::cout << "free object" << std::endl;
		delete animals[i];
		std::cout << std::endl;
	}


	// TEST 3
	Dog	*dog1 = new Dog();
	Dog	*dog2 = new Dog(*dog1);

	std::cout << "first one" << std::endl;	
	dog2->get_brain();

	std::cout << "second one" << std::endl;
	dog1->get_brain();

	dog1->set_brain(1, "good bye");
	std::cout << "first one" << std::endl;	
	dog1->get_brain();
	std::cout << "second one" << std::endl;
	dog2->get_brain();

	delete dog1;
	delete dog2;
	return 0;
}