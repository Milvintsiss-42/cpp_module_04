/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:30:17 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/18 17:29:11 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

const std::string * Brain::getIdeas() const
{
	return this->_ideas;
}

void Brain::setIdeaAtIndex(std::string idea, int index)
{
	if (index < 0 || index >= 100)
		return ;
	this->_ideas[index] = idea;
}

Brain &Brain::operator=(Brain const &rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = rhs.getIdeas()[i];
	}
	return *this;
}