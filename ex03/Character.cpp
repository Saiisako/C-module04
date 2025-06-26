/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:43:49 by skock             #+#    #+#             */
/*   Updated: 2025/06/26 12:24:10 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character() 
{
	std::cout << "Character constructor called" << std::endl;
	_name = "default";
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
}

Character::Character(const std::string name)
{
	std::cout << "Character constructor called" << std::endl;
	_name = name;
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
		delete _inventory[i];
	std::cout << "Character destructor called" << std::endl;
}

std::string const &Character::getName() const {return (this->_name);}

Character::Character(const Character &copy)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete _inventory[i];
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i];
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

ICharacter::~ICharacter() {}

void Character::equip(AMateria *m)
{
	if (!m)
		std::cout << "Materia doesn't exist" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			std::cout << "here" << std::endl;
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Materia hasn't been equiped : inventory full." << std::endl;
}

void Character::unequip(int idx)
{
	AMateria	*goto_stock;

	if (idx < 0 || idx > 3)
	{
		std::cout << "slot [" << idx << "] not found." << std::endl;
		return ;
	}
	else
	{
		goto_stock = _inventory[idx];
		this->_inventory[idx] = NULL;
	}
	add_to_stock(goto_stock);
}

void Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx])
		std::cout << this->getName() << " uses materia: [" << _inventory[idx]->getType() << "] on " << target.getName() << std::endl;
	this->_inventory[idx]->use(target);
}

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

void Character::get_inventory()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			std::cout << i << " char :  "<< this->_inventory[i]->getType() << std::endl;
	}	
}