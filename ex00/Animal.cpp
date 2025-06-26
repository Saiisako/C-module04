/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 20:00:29 by skock             #+#    #+#             */
/*   Updated: 2025/06/25 18:30:05 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {this->type = "Animal"; std::cout << "Animal constructor called" << std::endl;}

Animal::~Animal() {std::cout << "Animal destructor called" << std::endl;}

void Animal::makesound() const {std::cout << "Animal sound" << std::endl;}

std::string Animal::getType() const {return std::string(this->type);}

Animal::Animal(const Animal &copy) {*this = copy;}

Animal &Animal::operator=(const Animal &other) {return (this != &other) ? (this->type = other.type, *this) : *this;}
