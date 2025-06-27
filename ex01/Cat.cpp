/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:30:44 by skock             #+#    #+#             */
/*   Updated: 2025/06/26 18:37:41 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	Brain *brain= new Brain();

	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = brain;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const {std::cout << "Miaou Miaou" << std::endl;}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}
