/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:12:17 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 22:56:39 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
#define CAT_CLASS_H

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public AAnimal {
  public:
    Cat();               // canonical
    Cat(const Cat &src); // canonical
    ~Cat();              // canonical

    Cat &operator=(const Cat &rhs); // canonical

    void makeSound(void) const;

  private:
    Brain *_brain;
};

#endif