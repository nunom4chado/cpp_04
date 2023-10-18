/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:25:50 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 21:45:27 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include <iostream>

int main() {

    // AMateria *ice = new Ice();
    // AMateria *iceClone = ice->clone();

    // std::cout << ice->getType() << std::endl;
    // delete ice;
    // std::cout << iceClone->getType() << std::endl;
    // delete iceClone;

    // std::cout << "------------------" << std::endl;

    // AMateria *cure = new Cure();
    // AMateria *cureClone = cure->clone();

    // std::cout << cure->getType() << std::endl;
    // delete cure;
    // std::cout << cureClone->getType() << std::endl;
    // delete cureClone;

    ICharacter *me = new Character("me");

        return 0;
}