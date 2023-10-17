/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:00:45 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 15:01:18 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_CLASS_H
#define WRONG_ANIMAL_CLASS_H

#include <string>

class WrongAnimal {
  public:
    WrongAnimal();                       // canonical
    WrongAnimal(const WrongAnimal &src); // canonical
    ~WrongAnimal();                      // canonical

    WrongAnimal &operator=(const WrongAnimal &rhs); // canonical

    std::string getType(void) const;

    void makeSound(void) const;

  protected:
    std::string _type;
};

#endif