/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 14:56:19 by skock             #+#    #+#             */
/*   Updated: 2025/06/26 13:29:26 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &copy) {*this = copy;}

AMateria* Ice::clone() const {return (new Ice(*this));}

Ice &Ice::operator=(const Ice &other) {return (this != &other) ? (this->type = other.type, *this) : *this;}

void Ice::use(ICharacter &target) {std::cout << this->getType() << " : * shoots an ice bolt at " << target.getName() << " *" << std::endl;}
