/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:16:37 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 15:08:16 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {

    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "----------------------------------------------" << std::endl;

    const WrongAnimal *w_animal = new WrongAnimal();
    const WrongAnimal *w_cat = new WrongCat();

    std::cout << w_animal->getType() << " " << std::endl;
    std::cout << w_cat->getType() << " " << std::endl;
    w_cat->makeSound(); // will NOT output the cat sound!
    w_animal->makeSound();

    delete w_animal;
    delete w_cat;

    return 0;
}