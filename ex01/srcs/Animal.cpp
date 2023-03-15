/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:37:01 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/15 17:03:40 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "\"Some animal sound\"" << std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->_type = rhs.getType();
	return *this;
}
