/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:22:00 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/10 13:22:50 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal()
{
	std::cout << "AAnimal constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
}

std::string AAnimal::getType() const
{
	return this->_type;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	this->_type = rhs.getType();
	return *this;
}
