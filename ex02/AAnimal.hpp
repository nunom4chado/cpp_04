/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:40:16 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 22:54:38 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_H
#define AANIMAL_CLASS_H

#include <string>

class AAnimal {
  public:
    AAnimal();                   // canonical
    AAnimal(const AAnimal &src); // canonical
    virtual ~AAnimal();          // canonical

    AAnimal &operator=(const AAnimal &rhs); // canonical

    std::string getType(void) const;

    virtual void makeSound(void) const = 0;

  protected:
    std::string _type;
};

#endif