/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:32:22 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 14:51:04 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "colors.hpp"
#include "iostream"

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
Animal::Animal() : _type("Animal") {
    cout << MAGENTA << "Animal Default Constructer" << RESET << endl;
}

Animal::Animal(const Animal &src) {
    cout << MAGENTA << "Animal Copy Constructer" << RESET << endl;
    *this = src;
}

Animal::~Animal() { cout << MAGENTA << "Animal Destructer" << RESET << endl; }

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
Animal &Animal::operator=(const Animal &rhs) {
    cout << MAGENTA << "Animal Assignment Operator" << RESET << endl;

    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                                  Accessors                                 */
/* -------------------------------------------------------------------------- */
std::string Animal::getType(void) const { return this->_type; }

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */
void Animal::makeSound(void) const {
    cout << MAGENTA << "base animal sound..." << RESET << endl;
}