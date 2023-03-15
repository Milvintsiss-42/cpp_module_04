/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:57:15 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/15 14:41:26 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	Ice* ice = new Ice();
	src->learnMateria(ice);
	delete ice;
	Cure cure = Cure();
	src->learnMateria(&cure);

	ICharacter* me = new Character("me");
	AMateria* iceClone = src->createMateria("ice");
	me->equip(iceClone);
	AMateria* cureClone = src->createMateria("cure");
	me->equip(cureClone);

	Character* bob = new Character("bob");
	bob->equip(iceClone);

	Character* bobCopy = new Character();
	*bobCopy = *bob;
	bob->unequip(0);
	bob->use(0, *bob);
	bobCopy->use(0, *bobCopy);
	std::cout << "\n\n";

	me->use(0, *me);
	me->use(1, *bob);
	me->unequip(0);
	me->use(0, *bob);

	delete iceClone;
	delete cureClone;
	delete bob;
	delete bobCopy;
	delete me;
	delete src;
	return 0;
}