/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:13:19 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 22:57:57 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "AAnimal.hpp"
#include "colors.hpp"
#include "iostream"

using std::cout;
using std::endl;

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
Cat::Cat() : AAnimal() {
    this->_type = "Cat";
    this->_brain = new Brain("Cat");
    cout << YELLOW << "Cat Default Constructer" << RESET << endl;
}

Cat::Cat(const Cat &src) : AAnimal() {
    cout << YELLOW << "Cat Copy Constructer" << RESET << endl;
    *this = src;
}

Cat::~Cat() {
    delete this->_brain;
    cout << YELLOW << "Cat Destructer" << RESET << endl;
}

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
Cat &Cat::operator=(const Cat &rhs) {
    cout << YELLOW << "Cat Assignment Operator" << RESET << endl;

    if (this != &rhs) {
        this->_type = rhs._type;
        this->_brain = new Brain(*(rhs._brain));
    }
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */
void Cat::makeSound(void) const {
    cout << YELLOW << "miauuuu..." << RESET << endl;
}