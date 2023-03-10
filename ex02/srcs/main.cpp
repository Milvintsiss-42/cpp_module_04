/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:36:12 by ple-stra          #+#    #+#             */
/*   Updated: 2023/03/10 13:24:17 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	AAnimal ** animals = new AAnimal * [10];

	for (int i = 0; i < 10; i += 2)
	{
		animals[i] = new Cat();
		animals[i + 1] = new Dog();
	}
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	delete [] animals;

	// AAnimal animal = AAnimal();
}