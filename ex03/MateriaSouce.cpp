/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSouce.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:58:22 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 22:06:35 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                          Constructers Destructers                          */
/* -------------------------------------------------------------------------- */

MateriaSource::MateriaSource() {
    for (int i = 0; i < 3; i++) {
        this->_slots[i] = nullptr;
    }
    cout << "MateriaSource Default Constructer" << endl;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
    cout << "MateriaSource Copy Constructer" << endl;
    *this = src;
}

MateriaSource::~MateriaSource() { cout << "MateriaSource Destructer" << endl; }

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
    cout << "MateriaSource Assignment Operator" << endl;

    if (this != &rhs) {
        for (int i = 0; i < 3; i++) {
            this->_slots[i] = rhs._slots[i]->clone();
        }
    }

    return *this;
}

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */