/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 10:57:18 by bsampaio          #+#    #+#             */
/*   Updated: 2026/07/30 16:28:45 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) 
{
    std::cout << "=== 1. CONSTRUCTOR AND WHOAMI TEST ===" << std::endl;
    DiamondTrap dia1("Diamondy");
    dia1.whoAmI();

    std::cout << "\n\n=== 2. ATTACK TEST AND INHERITED ACTIONS ===" << std::endl;
    dia1.attack("alvo de teste");
    dia1.takeDamage(30);
    dia1.beRepaired(20);

    std::cout << "\n\n=== 3. COPY CONSTRUCTOR TEST ===\n" << std::endl;
    DiamondTrap dia2(dia1);
    dia2.whoAmI();

    std::cout << "\n=== 4. ASSIGNMENT OPERATOR TEST ===" << std::endl;
    DiamondTrap dia3("Provisorio");
    dia3 = dia1;
    dia3.whoAmI();

    std::cout << "\n=== 5. DESTRUCTOR TEST ===" << std::endl;
    return 0;
}