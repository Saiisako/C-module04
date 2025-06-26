/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:01:35 by skock             #+#    #+#             */
/*   Updated: 2025/06/25 18:31:58 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		/// CANONIC FORM
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& copy);
		WrongCat& operator=(const WrongCat& other);
		///
};
