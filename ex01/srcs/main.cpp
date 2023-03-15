/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:36:12 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/15 17:18:25 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *animals[10];

	for (int i = 0; i < 10; i += 2)
	{
		animals[i] = new Cat();
		animals[i + 1] = new Dog();
	}
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}

	Cat first = Cat();
	Cat second = Cat(first);

	Brain brain = Brain();
	brain.setIdeaAtIndex("Some idea", 1);

	Brain brainCopy = Brain(brain);
	brainCopy.setIdeaAtIndex("Some other idea", 1);

	std::cout << brain.getIdeas()[1] << std::endl;
	std::cout << brainCopy.getIdeas()[1] << std::endl;
}
