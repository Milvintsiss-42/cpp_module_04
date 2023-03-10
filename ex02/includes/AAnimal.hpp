/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:21:46 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/10 13:22:36 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class AAnimal
{
protected:
	std::string _type;

public:
	AAnimal();
	AAnimal(AAnimal const & src);
	virtual ~AAnimal();

	virtual void makeSound() const = 0;

	std::string getType() const;

	AAnimal &operator=(AAnimal const &rhs);
};
