/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:31:06 by skock             #+#    #+#             */
/*   Updated: 2025/06/19 14:01:56 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog& copy); // Constructeur de copie
		Dog& operator=(const Dog& other); // Opérateur d'affectation
		void	makeSound() const;
		void	set_brain(int index, std::string idea);
		void	get_brain(void);
		
};
