/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 14:56:19 by skock             #+#    #+#             */
/*   Updated: 2025/06/26 11:52:16 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice() : AMateria("ice") {std::cout << "Ice constructor called" << std::endl;}

Ice::~Ice() {std::cout << "Ice destructor called" << std::endl;}

Ice::Ice(const Ice &copy) {*this = copy;}

AMateria* Ice::clone() const {return (new Ice(*this));}

Ice &Ice::operator=(const Ice &other) {return (this != &other) ? (this->type = other.type, *this) : *this;}

void Ice::use(ICharacter &target) {std::cout << this->getType() << " : * shoots an ice bolt at " << target.getName() << " *" << std::endl;}
