/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:59:58 by skock             #+#    #+#             */
/*   Updated: 2025/06/16 15:29:47 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

void	free_all(const Dog *dogo, const Cat *minicat, const Animal *meta, const WrongCat *wrong_minicat, const WrongAnimal *wrong_meta)
{
	delete dogo;
	delete minicat;
	delete meta;
	delete wrong_minicat;
	delete wrong_meta;
}

int	main()
{
	const Animal	*meta = new Animal();
	const Dog		*dogo = new Dog();
	const Cat		*minicat = new Cat();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "//// Normal Animals ////" << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << dogo->getType() << std::endl;
	std::cout << minicat->getType() << std::endl;
	meta->makesound();
	dogo->makeSound();
	minicat->makeSound();

	std::cout << std::endl;
	std::cout << std::endl;

	const WrongAnimal	*wrong_meta = new WrongAnimal();
	const WrongCat		*wrong_minicat= new WrongCat();

	std::cout << std::endl;
	std::cout << "//// Wrong Animals ////" << std::endl;
	std::cout << wrong_meta->getType() << std::endl;
	std::cout << wrong_minicat->getType() << std::endl;
	wrong_meta->makeSound();
	wrong_minicat->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;

	free_all(dogo, minicat, meta, wrong_minicat, wrong_meta);
	return (0);
}