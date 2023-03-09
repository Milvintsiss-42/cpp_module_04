/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:32:36 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/09 17:44:40 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called." << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "\"Maow!\"" << std::endl;
}
