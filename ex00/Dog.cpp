/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:13:19 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 15:13:20 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "colors.hpp"
#include "iostream"

using std::cout;
using std::endl;

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
Dog::Dog() : Animal() {
    this->_type = "Dog";
    cout << BLUE << "Dog Default Constructer" << RESET << endl;
}

Dog::Dog(const Dog &src) : Animal() {
    cout << BLUE << "Dog Copy Constructer" << RESET << endl;
    *this = src;
}

Dog::~Dog() { cout << BLUE << "Dog Destructer" << RESET << endl; }

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
Dog &Dog::operator=(const Dog &rhs) {
    cout << BLUE << "Dog Assignment Operator" << RESET << endl;

    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */
void Dog::makeSound(void) const {
    cout << BLUE << "bark bark..." << RESET << endl;
}