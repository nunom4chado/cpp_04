/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:49:10 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 15:31:02 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"
#include <string>

class Cure : public AMateria {
  public:
    Cure();                // canonical
    Cure(const Cure &src); // canonical
    ~Cure();               // canonical

    Cure &operator=(const Cure &rhs); // canonical

    AMateria *clone() const;
};

#endif