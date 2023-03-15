/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:52:35 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/14 20:21:23 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria ** _inventory;
	
public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	~MateriaSource();

	void learnMateria(AMateria * materia);
	AMateria * createMateria(std::string const & type);

	MateriaSource &operator=(MateriaSource const &rhs);
};
