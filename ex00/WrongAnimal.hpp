/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:01:16 by skock             #+#    #+#             */
/*   Updated: 2025/06/16 15:24:28 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		~WrongAnimal();
		void		makeSound() const;
		std::string	getType() const;
};