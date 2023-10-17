/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:38:05 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 15:41:00 by numartin         ###   ########.fr       */
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
Brain::Brain() { cout << RED << "Brain Default Constructer" << RESET << endl; }

Brain::Brain(const Brain &src) {
    cout << RED << "Brain Copy Constructer" << RESET << endl;
    *this = src;
}

Brain::~Brain() { cout << RED << "Brain Destructer" << RESET << endl; }

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
Brain &Brain::operator=(const Brain &rhs) {
    cout << RED << "Brain Assignment Operator" << RESET << endl;

    if (this != &rhs) {
        // handle deep copy
    }
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */