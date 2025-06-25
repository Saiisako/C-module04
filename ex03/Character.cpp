/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:43:49 by skock             #+#    #+#             */
/*   Updated: 2025/06/25 18:12:51 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _inventory({NULL, NULL, NULL, NULL}), _name("default") {std::cout << "Character constructor called" << std::endl;}

Character::Character(const std::string name) : _inventory({NULL, NULL, NULL, NULL}), _name(name) {std::cout << "Character constructor called" << std::endl;}

Character::~Character() {std::cout << "Character destructor called" << std::endl;}

std::string const &Character::getName() const {return (this->_name);}

void Character::equip(AMateria *m)
{
	bool flag = false;
	if (!m)
		std::cout << "Materia doesn't exist" << std::endl;
	for (int i = 0; this->_inventory[i]; i++)
	{
		if (!this->_inventory[i])
		{
			_inventory[i] = m;
			flag = true;
		}
	}
	if (flag)
		std::cout << "Materia hasn't been equiped : inventory full." << std::endl;
}

void Character::unequip(int idx)
{
	AMateria	*goto_stock;

	if (idx < 0 && idx > 3)
		std::cout << "slot [" << idx << "] not found." << std::endl;
	else
	{
		goto_stock = _inventory[idx];
		this->_inventory[idx] = NULL;
	}
	add_to_stock(goto_stock);
}

void Character::use(int idx, ICharacter &target) {std::cout << this->getName() << "Use materia : [" << this->_inventory[idx]->getType() << "] on " << target.getName() << std::endl;}

void Character::add_to_stock(AMateria *goto_stock)
{
	for (int i = 0; this->_stock[i]; i++)
	{
		if (!_stock[i])
		{
			_stock[i] = goto_stock;
			std::cout << "Materia has been sent to the stock." << std::endl;
		}
	}
}
