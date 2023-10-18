/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:44:30 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 21:58:06 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
#define MATERIA_SOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
  private:
    AMateria *_slots[4];

  public:
    MateriaSource();                         // canonical
    MateriaSource(const MateriaSource &src); // canonical
    ~MateriaSource();                        // canonical

    MateriaSource &operator=(const MateriaSource &rhs); // canonical

    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};

#endif