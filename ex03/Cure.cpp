/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 14:56:17 by skock             #+#    #+#             */
/*   Updated: 2025/06/25 18:19:19 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure() {std::cout << "Cure constructor called" << std::endl;}

Cure::~Cure() {std::cout << "Cure destructor called" << std::endl;}

Cure::Cure(const Cure &copy) {*this = copy;}

Cure &Cure::operator=(const Cure &other) {return (this != &other) ? (this->type = other.type, *this) : *this;}

AMateria* Cure::clone() const {return (new Cure(*this));}

void Cure::use(ICharacter &target) {std::cout << this->getType() << " : * heals " << target.getName() << "'s wounds *" << std::endl;}
