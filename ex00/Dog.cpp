/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:31:32 by skock             #+#    #+#             */
/*   Updated: 2025/06/25 18:38:49 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog() {std::cout << "Dog destructor called" << std::endl;}

Dog &Dog::operator=(const Dog &other) {return (this != &other) ? (this->type = other.type, *this) : *this;}

void Dog::makeSound() const {std::cout << "Wouf Wouf" << std::endl;}

Dog::Dog(const Dog &copy) {*this = copy;}

