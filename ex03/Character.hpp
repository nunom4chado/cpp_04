/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:06:47 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 21:42:55 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "AMateria.hpp"
#include <string>

class Character : public ICharacter {
  private:
    std::string _name;
    AMateria *_inventory[4];

  public:
    Character(); // canonical
    Character(std::string name);
    Character(const Character &src); // canonical
    ~Character();                    // canonical

    Character &operator=(const Character &rhs); // canonical

    // acessors
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif