/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:10:17 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 11:29:17 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                          Constructers Destructers                          */
/* -------------------------------------------------------------------------- */

AMateria::AMateria() : _type("none") {
    cout << "AMateria Default Constructer" << endl;
}

AMateria::AMateria(string const &type) : _type(type) {
    cout << "AMateria Parameterized Constructer" << endl;
}

AMateria::AMateria(const AMateria &src) : _type("none") {
    cout << "AMateria Copy Constructer" << endl;
    *this = src;
}

AMateria::~AMateria() { cout << "AMateria Destructer" << endl; }

AMateria &AMateria::operator=(const AMateria &rhs) {
    cout << "AMateria Assignment Operator" << endl;

    if (this != &rhs) {
        this->_type = rhs._type;
    }

    return *this;
}

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */
string const &AMateria::getType() const { return this->_type; }