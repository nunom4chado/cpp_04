/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:03:05 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 15:03:29 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_CLASS_H
#define WRONG_CAT_CLASS_H

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal {
  public:
    WrongCat();                    // canonical
    WrongCat(const WrongCat &src); // canonical
    ~WrongCat();                   // canonical

    WrongCat &operator=(const WrongCat &rhs); // canonical

    void makeSound(void);
};

#endif