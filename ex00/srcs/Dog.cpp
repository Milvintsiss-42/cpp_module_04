/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:32:36 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/09 17:40:15 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called." << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "\"Wouaf!\"" << std::endl;
}
