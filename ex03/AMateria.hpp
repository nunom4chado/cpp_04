/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:02:13 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 11:26:43 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>

class AMateria {
  protected:
    std::string _type;

  public:
    AMateria(); // canonical
    AMateria(std::string const &type);
    AMateria(const AMateria &src); // canonical
    virtual ~AMateria();           // canonical

    AMateria &operator=(const AMateria &rhs); // canonical

    std::string const &getType() const; // Returns the materia type
    // virtual AMateria *clone() const = 0;
    //  TODO virtual void use(ICharacter &target);
};

#endif