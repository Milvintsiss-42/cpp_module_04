/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:24:03 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/15 17:16:42 by ple-stra         ###   ########.fr       */
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
	void setIdeaAtIndex(std::string idea, int index);

	Brain &operator=(Brain const &rhs);
};
