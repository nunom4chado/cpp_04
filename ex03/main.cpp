/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:25:50 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 11:33:32 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

int main() {

    AMateria demo;
    AMateria ice("ice");

    AMateria iceCopy(ice);

    std::cout << "------------------" << std::endl;

    AMateria outer("outer");
    { AMateria inner(outer); }
    std::cout << outer.getType() << std::endl;

    std::cout << "------------------" << std::endl;

    std::cout << demo.getType() << std::endl;
    std::cout << ice.getType() << std::endl;
    std::cout << iceCopy.getType() << std::endl;

    return 0;
}