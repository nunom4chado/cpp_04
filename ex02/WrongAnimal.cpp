/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:01:40 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 15:02:25 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "colors.hpp"
#include "iostream"

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    cout << GREEN << "WrongAnimal Default Constructer" << RESET << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    cout << GREEN << "WrongAnimal Copy Constructer" << RESET << endl;
    *this = src;
}

WrongAnimal::~WrongAnimal() {
    cout << GREEN << "WrongAnimal Destructer" << RESET << endl;
}

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
    cout << GREEN << "WrongAnimal Assignment Operator" << RESET << endl;

    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                                  Accessors                                 */
/* -------------------------------------------------------------------------- */
std::string WrongAnimal::getType(void) const { return this->_type; }

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */
void WrongAnimal::makeSound(void) const {
    cout << GREEN << "base WrongAnimal sound..." << RESET << endl;
}