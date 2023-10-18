/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:49:10 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 15:31:11 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"
#include <string>

class Ice : public AMateria {
  public:
    Ice();               // canonical
    Ice(const Ice &src); // canonical
    ~Ice();              // canonical

    Ice &operator=(const Ice &rhs); // canonical

    AMateria *clone() const;
};

#endif