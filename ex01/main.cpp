/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 16:41:35 by bsampaio          #+#    #+#             */
/*   Updated: 2026/07/29 10:36:58 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << "===== Constructor Test =====\n";
    ScavTrap scav("Guardian");

    std::cout << "\n===== Attack Test =====\n";
    scav.attack("Bandit");

    std::cout << "\n===== Take Damage Test =====\n";
    scav.takeDamage(30);

    std::cout << "\n===== Repair Test =====\n";
    scav.beRepaired(20);

    std::cout << "\n===== Special Ability Test =====\n";
    scav.guardGate();

    std::cout << "\n===== Copy Constructor Test =====\n";
    ScavTrap copy(scav);
    copy.attack("Enemy");

    std::cout << "\n===== Assignment Operator Test =====\n";
    ScavTrap other("Robot");
    other = scav;
    other.attack("Target");

    std::cout << "\n===== Death Test =====\n";
    scav.takeDamage(200);
    scav.attack("Zombie");
    scav.beRepaired(10);

    return 0;
}