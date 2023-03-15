/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:56:29 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/15 13:38:21 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	this->_inventory = new AMateria * [4];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != 0)
			delete this->_inventory[i];
	}
	delete [] this->_inventory;
}

void MateriaSource::learnMateria(AMateria * materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = materia->clone();
			break ;
		}
	}
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	for (int i = 3; i >= 0; i--)
	{
		if (this->_inventory[i] != 0 && this->_inventory[i]->getType() == type)
		{
			return this->_inventory[i]->clone();
		}
	}
	return 0;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}