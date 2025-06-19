/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 20:00:22 by skock             #+#    #+#             */
/*   Updated: 2025/06/19 11:30:47 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(); // Constructeur par défaut
		virtual ~Animal(); // Deconstructeur
		Animal(const Animal& copy); // Constructeur de copie
		Animal& operator=(const Animal& other); // Opérateur d'affectation
		//
		virtual void	makesound() const;
		std::string		getType() const;
};

