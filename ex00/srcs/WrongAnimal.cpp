/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:47:32 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/09 17:47:50 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "\"Some WrongAnimal sound\"" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->_type = rhs.getType();
	return *this;
}
