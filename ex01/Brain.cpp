/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:38:05 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 22:36:53 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "colors.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
Brain::Brain() {
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = new string("Animal idea");
    }
    cout << RED << "Brain Default Constructer" << RESET << endl;
}

Brain::Brain(string type) {
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = new string(type + " idea");
    }
    cout << RED << "Brain Default Constructer" << RESET << endl;
}

Brain::Brain(const Brain &src) {
    cout << RED << "Brain Copy Constructer" << RESET << endl;

    // In c++98 we can't delegate constructers -_-' . We must initialize the
    // array to prevent uninitialized values
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = new string("Animal idea");
    }

    *this = src;
}

Brain::~Brain() {
    for (int i = 0; i < 100; i++) {
        delete this->_ideas[i];
    }
    cout << RED << "Brain Destructer" << RESET << endl;
}

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
Brain &Brain::operator=(const Brain &rhs) {
    cout << RED << "Brain Assignment Operator" << RESET << endl;

    if (this != &rhs) {
        for (int i = 0; i < 100; i++) {
            delete this->_ideas[i]; // free old string
            this->_ideas[i] = new string(*rhs._ideas[i]);

            // Visualize that a new copy of the string is being made
            // cout << "new address: " << this->_ideas[i]
            //      << ", src address: " << rhs._ideas[i] << endl;
        }
    }
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */
void Brain::showIdeas(void) const {
    cout << "Show ideas:" << endl;
    for (int i = 0; i < 100; i++) {
        cout << *this->_ideas[i] << endl;
    }
}