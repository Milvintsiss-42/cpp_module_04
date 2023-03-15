/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:01:43 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/14 20:32:38 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria ** _inventory;
	
public:
	Character();
	Character(std::string name);
	Character(Character const & src);
	~Character();

	std::string const & getName() const;
	void equip(AMateria * m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	Character &operator=(Character const &rhs);
};
