/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:24:03 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/09 19:41:14 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(Brain const & src);
	~Brain();

	const std::string * getIdeas() const;

	Brain &operator=(Brain const &rhs);
};