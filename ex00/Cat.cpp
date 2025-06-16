/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:30:44 by skock             #+#    #+#             */
/*   Updated: 2025/06/16 15:00:40 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat() {std::cout << "Cat destructor called" << std::endl;}

void Cat::makeSound() const {std::cout << "Miaou Miaou" << std::endl;}
