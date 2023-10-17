/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:40:16 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 15:27:50 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_H
#define ANIMAL_CLASS_H

#include <string>

class Animal {
  public:
    Animal();                  // canonical
    Animal(const Animal &src); // canonical
    virtual ~Animal();         // canonical

    Animal &operator=(const Animal &rhs); // canonical

    std::string getType(void) const;

    virtual void makeSound(void) const;

  protected:
    std::string _type;
};

#endif