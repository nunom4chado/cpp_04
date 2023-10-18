/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:34:00 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 22:04:35 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                          Constructers Destructers                          */
/* -------------------------------------------------------------------------- */

Character::Character() {
    for (int i = 0; i < 3; i++) {
        this->_inventory[i] = nullptr;
    }
    cout << "Character Default Constructer" << endl;
}

Character::Character(string name) : _name(name) {
    cout << "Character Parameterized Constructer" << endl;
}

Character::Character(const Character &src) {
    cout << "Character Copy Constructer" << endl;
    *this = src;
}

Character::~Character() { cout << "Character Destructer" << endl; }

Character &Character::operator=(const Character &rhs) {
    cout << "Character Assignment Operator" << endl;

    if (this != &rhs) {
        this->_name = rhs._name;
        // TODO copy inventory
    }

    return *this;
}

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */
string const &Character::getName() const { return this->_name; }

void Character::equip(AMateria *m) {
    if (m == nullptr)
        return;

    for (int i = 0; i < 4; i++) {
        if (!this->_inventory[i]) {
            this->_inventory[i] = m;
            cout << this->_name << " added " << m->getType()
                 << " to the inventory." << endl;
            return;
        }
    }

    cout << this->_name << "'s inventory is full!" << endl;
};

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3)
        return;

    if (this->_inventory[idx]) {
        cout << this->_name << " removed " << this->_inventory[idx]->getType()
             << " to the inventory." << endl;
        this->_inventory[idx] = nullptr;
    }
};
void Character::use(int idx, ICharacter &target) {
    if (idx < 0 || idx > 3)
        return;

    if (this->_inventory[idx]) {
        this->_inventory[idx]->use(target);
    }
};