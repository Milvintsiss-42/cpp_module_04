/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:26:49 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/15 17:25:50 by ple-stra         ###   ########.fr       */
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

	virtual AAnimal &operator=(AAnimal const &rhs);
};
