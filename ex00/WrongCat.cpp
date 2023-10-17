/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:03:48 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 15:04:45 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "colors.hpp"
#include "iostream"

using std::cout;
using std::endl;

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
WrongCat::WrongCat() : WrongAnimal() {
    this->_type = "WrongCat";
    cout << CYAN << "WrongCat Default Constructer" << RESET << endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal() {
    cout << CYAN << "WrongCat Copy Constructer" << RESET << endl;
    *this = src;
}

WrongCat::~WrongCat() {
    cout << CYAN << "WrongCat Destructer" << RESET << endl;
}

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
WrongCat &WrongCat::operator=(const WrongCat &rhs) {
    cout << CYAN << "WrongCat Assignment Operator" << RESET << endl;

    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */
void WrongCat::makeSound(void) {
    cout << CYAN << "wrong miauuuu..." << RESET << endl;
}