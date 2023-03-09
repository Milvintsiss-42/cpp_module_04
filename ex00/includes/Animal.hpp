/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:26:49 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/09 17:43:40 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(Animal const & src);
	~Animal();

	virtual void makeSound() const;

	std::string getType() const;

	Animal &operator=(Animal const &rhs);
};
