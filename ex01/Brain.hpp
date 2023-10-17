/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:33:50 by numartin          #+#    #+#             */
/*   Updated: 2023/10/17 15:36:54 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
#define BRAIN_CLASS_H

#include <string>

class Brain {
  public:
    Brain();                 // canonical
    Brain(const Brain &src); // canonical
    ~Brain();                // canonical

    Brain &operator=(const Brain &rhs); // canonical

    std::string ideas[100];
};

#endif