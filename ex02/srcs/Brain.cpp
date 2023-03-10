/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:30:17 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/09 19:41:06 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(Brain const & src)
{
	*this = src;
}

Brain::~Brain()
{
}

const std::string * Brain::getIdeas() const
{
	return this->_ideas;
}

Brain &Brain::operator=(Brain const &rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = rhs.getIdeas()[i];
	}
	return *this;
}