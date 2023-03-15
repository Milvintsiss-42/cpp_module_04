/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:32:36 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/15 17:28:03 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : AAnimal()
{
	std::cout << "Dog constructor called." << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & src) : AAnimal(src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	*this->_brain = *src._brain;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "\"Wouaf!\"" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	this->AAnimal::operator=(rhs);
	delete this->_brain;
	this->_brain = new Brain();
	*this->_brain = *rhs._brain;
	return *this;
}
