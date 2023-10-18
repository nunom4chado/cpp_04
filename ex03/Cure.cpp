/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:52:25 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 15:33:31 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                          Constructers Destructers                          */
/* -------------------------------------------------------------------------- */

Cure::Cure() : AMateria("cure") { cout << "Cure Default Constructer" << endl; }

Cure::Cure(const Cure &src) : AMateria("cure") {
    cout << "Cure Copy Constructer" << endl;
    *this = src;
}

Cure::~Cure() { cout << "Cure Destructer" << endl; }

Cure &Cure::operator=(const Cure &rhs) {
    cout << "Cure Assignment Operator" << endl;

    if (this != &rhs) {
        this->_type = rhs._type;
    }

    return *this;
}

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */
AMateria *Cure::clone() const { return new Cure(); }

void use(ICharacter &target) {
    cout << "* heals " << target.getName() << " wounds *" << endl;
}