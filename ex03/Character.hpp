/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:44:03 by skock             #+#    #+#             */
/*   Updated: 2025/06/26 12:19:49 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria*	_stock[100];
		AMateria*	_inventory[4];
		std::string	_name;
	public:
		Character();
		Character(const std::string name);
		~Character();
		std::string const & getName() const;
		Character(const Character& copy);
		Character& operator=(const Character &other);
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void get_inventory();
		void add_to_stock(AMateria *goto_stock);
};
