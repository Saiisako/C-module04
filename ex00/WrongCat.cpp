/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:07:46 by skock             #+#    #+#             */
/*   Updated: 2025/06/25 18:39:31 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {std::cout << "WrongCat destructor called" << std::endl;}

WrongCat::WrongCat(const WrongCat &copy) {*this = copy;}

WrongCat &WrongCat::operator=(const WrongCat &other) {return (this != &other) ? (this->type = other.type, *this) : *this;}
