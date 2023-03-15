/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:32:36 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/15 17:13:32 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called." << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	*this->_brain = *src._brain;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "\"Maow!\"" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->Animal::operator=(rhs);
	this->_type = "Cat";
	delete this->_brain;
	this->_brain = new Brain();
	*this->_brain = *rhs._brain;
	return *this;
}
