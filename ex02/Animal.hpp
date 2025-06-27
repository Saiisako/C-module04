/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 20:00:22 by skock             #+#    #+#             */
/*   Updated: 2025/06/27 10:34:27 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
		Animal(); // Constructeur par défaut
		Animal(const Animal& copy); // Constructeur de copie
	public:
		virtual ~Animal(); // Destructeur
		Animal& operator=(const Animal& other); // Opérateur d'affectation
		//
		virtual void	makeSound() const = 0;
		std::string		getType() const;
};

