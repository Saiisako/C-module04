/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:43:19 by skock             #+#    #+#             */
/*   Updated: 2025/06/27 13:07:58 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int	main(void)
{
	std::cout << "----------- Subject test --------------\n" << std::endl;
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << "-------------My own test ---------------\n" << std::endl;

	IMateriaSource *test = new MateriaSource();
	AMateria *tmpIce = test->createMateria("ice");

	test->learnMateria(new Cure());
	test->learnMateria(new Ice());

	ICharacter *didier = new Character("didier");
	ICharacter *mireille = new Character("mireille");

	tmpIce = test->createMateria("ice");
	AMateria *tmpCure = test->createMateria("cure");


	didier->equip(tmpIce->clone());
	didier->equip(tmpCure->clone());
	didier->equip(tmpIce->clone());
	didier->equip(tmpCure->clone());
	didier->equip(tmpCure->clone());
	mireille->equip(tmpIce->clone());

	didier->use(0, *mireille);
	didier->use(1, *mireille);
	didier->use(2, *mireille);
	didier->use(3, *mireille);
	didier->use(5, *didier);
	mireille->use(0, *didier);
	mireille->use(1, *didier);

	didier->unequip(0);
	didier->unequip(1);
	didier->unequip(2);
	didier->unequip(3);
	mireille->unequip(0);

	delete tmpCure;
	delete tmpIce;
	delete mireille;
	delete didier;
	delete test;

	return (0);
}