/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:26:49 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/15 16:50:58 by ple-stra         ###   ########.fr       */
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
	virtual ~Animal();

	virtual void makeSound() const;

	std::string getType() const;

	virtual Animal &operator=(Animal const &rhs);
};
