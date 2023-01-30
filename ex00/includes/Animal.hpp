/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:26:49 by ple-stra          #+#    #+#             */
/*   Updated: 2023/01/30 15:36:57 by ple-stra         ###   ########.fr       */
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

	void makeSound() const;

	Animal &operator=(Animal const &rhs);
};
