/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:12:17 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 22:56:34 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
#define DOG_CLASS_H

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public AAnimal {
  public:
    Dog();               // canonical
    Dog(const Dog &src); // canonical
    ~Dog();              // canonical

    Dog &operator=(const Dog &rhs); // canonical

    void makeSound(void) const;

  private:
    Brain *_brain;
};

#endif