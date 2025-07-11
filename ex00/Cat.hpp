/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:30:47 by skock             #+#    #+#             */
/*   Updated: 2025/06/25 18:31:08 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		/// CANONIC FORM
		Cat();
		~Cat();
		Cat(const Cat& copy); // Constructeur de copie
		Cat& operator=(const Cat& other); // Opérateur d'affectation
		///
		void	makeSound() const;
};
