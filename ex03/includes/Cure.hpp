/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:39:39 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/14 19:40:10 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const & src);
	~Cure();

	Cure * clone() const;
	void use(ICharacter & target);
};
