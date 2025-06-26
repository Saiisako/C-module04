/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:43:19 by skock             #+#    #+#             */
/*   Updated: 2025/06/26 13:59:47 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{

	/// SUBJECT TEST ///

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;

	/// MY OWN TEST

	MateriaSource *src = new MateriaSource();

	Ice		*materia_ice = new Ice();
	Cure	*materia_cure = new Cure();

	src->learnMateria(materia_ice);
	src->learnMateria(materia_cure);
	
	Character	*me = new Character("me");
	Character	*bob = new Character("bob");

	AMateria	*tmp;
	src->createMateria("ice");
	src->createMateria("cure");
	
	delete bob;
	delete me;
	delete src;

	return 0;
}