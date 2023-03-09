/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:49:07 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/09 17:49:19 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor called." << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "\"Maow!\"" << std::endl;
}
