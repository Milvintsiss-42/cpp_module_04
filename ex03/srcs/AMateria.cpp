/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:29:39 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/14 20:45:10 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	this->_type = src.getType();
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Materia used on " << target.getName() << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs.getType();
	return *this;
}
