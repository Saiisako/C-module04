/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:44:48 by skock             #+#    #+#             */
/*   Updated: 2025/06/26 12:55:27 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("Materia") {std::cout << "AMateria constructor called" << std::endl;}

AMateria::AMateria(std::string const &type) {this->type =type;}

AMateria::AMateria(const AMateria& copy) {*this = copy;}

AMateria::~AMateria() {std::cout << "AMateria destructor called" << std::endl;}

AMateria &AMateria::operator=(const AMateria &other) {return (this != &other) ? (this->type = other.type, *this) : *this;}

std::string const &AMateria::getType() const {return (this->type);}

void AMateria::use(ICharacter& target) {(void)target;}

