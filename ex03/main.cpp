/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:43:19 by skock             #+#    #+#             */
/*   Updated: 2025/06/25 18:06:10 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"

int	main(void)
{
	Cure	*cure = new Cure();
	Ice		*ice = new Ice();


	(void)cure;
	(void)ice;

	delete cure;
	delete ice;
	return (0);
}