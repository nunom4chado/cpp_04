/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:52:25 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 15:40:29 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                          Constructers Destructers                          */
/* -------------------------------------------------------------------------- */

Ice::Ice() : AMateria("ice") { cout << "Ice Default Constructer" << endl; }

Ice::Ice(const Ice &src) : AMateria("ice") {
    cout << "Ice Copy Constructer" << endl;
    *this = src;
}

Ice::~Ice() { cout << "Ice Destructer" << endl; }

Ice &Ice::operator=(const Ice &rhs) {
    cout << "Ice Assignment Operator" << endl;

    if (this != &rhs) {
        this->_type = rhs._type;
    }

    return *this;
}

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */
AMateria *Ice::clone() const { return new Ice(); }

void use(ICharacter &target) {
    cout << "* shoots an ice bolt at  " << target.getName() << " *" << endl;
}