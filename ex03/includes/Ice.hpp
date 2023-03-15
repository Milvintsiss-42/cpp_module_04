/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:35:27 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/14 19:40:14 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const & src);
	~Ice();

	Ice * clone() const;
	void use(ICharacter & target);
};
