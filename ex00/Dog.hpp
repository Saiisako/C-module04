/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:31:06 by skock             #+#    #+#             */
/*   Updated: 2025/06/25 18:31:22 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		/// CANONIC FORM
		Dog();
		~Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& other);
		///
		void	makeSound() const;
};
