/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 12:04:46 by bsampaio          #+#    #+#             */
/*   Updated: 2026/07/29 10:21:08 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap trap("Bot");
    ClapTrap clap(trap);

    std::cout << "\n======================Trap Tests======================\n";
    trap.attack("Enemy");
    trap.takeDamage(3);
    trap.beRepaired(4);
    
    std::cout << "\n======================Clap Tests======================\n";
    clap.attack("Police-Bot");
    clap.takeDamage(5);
    clap.beRepaired(7);
    
    return (0);
}

