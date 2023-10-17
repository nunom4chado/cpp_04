/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:32:22 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 22:55:09 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "colors.hpp"
#include "iostream"

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
AAnimal::AAnimal() : _type("AAnimal") {
    cout << MAGENTA << "AAnimal Default Constructer" << RESET << endl;
}

AAnimal::AAnimal(const AAnimal &src) {
    cout << MAGENTA << "AAnimal Copy Constructer" << RESET << endl;
    *this = src;
}

AAnimal::~AAnimal() {
    cout << MAGENTA << "AAnimal Destructer" << RESET << endl;
}

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
AAnimal &AAnimal::operator=(const AAnimal &rhs) {
    cout << MAGENTA << "AAnimal Assignment Operator" << RESET << endl;

    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                                  Accessors                                 */
/* -------------------------------------------------------------------------- */
std::string AAnimal::getType(void) const { return this->_type; }
