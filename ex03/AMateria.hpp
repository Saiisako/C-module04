/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:39:24 by skock             #+#    #+#             */
/*   Updated: 2025/06/19 14:44:31 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AMateria
{
	protected:

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& copy);
		virtual ~AMateria();
		AMateria& operator=(const AMateria& other);
		//
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
