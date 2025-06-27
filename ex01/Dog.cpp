/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:31:32 by skock             #+#    #+#             */
/*   Updated: 2025/06/26 18:37:33 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	Brain *brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = brain;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const {std::cout << "Wouf Wouf" << std::endl;}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void	Dog::set_brain(int index, std::string line)
{
	this->brain->set_ideas(line, index);
}
void	Dog::get_brain(void)
{
	for (int i = 0; i < 100; i++)
		std::cout << this->brain->get_ideas(i) << std::endl;
}
