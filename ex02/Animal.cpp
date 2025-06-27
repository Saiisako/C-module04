/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 20:00:29 by skock             #+#    #+#             */
/*   Updated: 2025/06/27 10:22:23 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {this->type = "Animal"; std::cout << "Animal constructor called" << std::endl;}

Animal::~Animal() {std::cout << "Animal destructor called" << std::endl;}

std::string Animal::getType() const {return std::string(this->type);}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}
