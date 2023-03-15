/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:03:36 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/15 13:46:22 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

static void initInventory(AMateria ** & inventory);

Character::Character()
{
	initInventory(this->_inventory);
}

Character::Character(std::string name) : _name(name)
{
	initInventory(this->_inventory);
}

static void initInventory(AMateria ** & inventory)
{
	inventory = new AMateria * [4];
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character()
{
	delete [] this->_inventory;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx] != 0)
		this->_inventory[idx]->use(target);
	else
		std::cout << "There is no materia corresponding to this idx."
			<< std::endl;
}


Character &Character::operator=(Character const &rhs)
{
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}
