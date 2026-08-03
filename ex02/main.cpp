/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 10:57:18 by bsampaio          #+#    #+#             */
/*   Updated: 2026/07/29 12:13:51 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::cout << "===== Constructor Test =====\n";
    FragTrap frag("Fraggy");

    std::cout << "\n===== Attack Test =====\n";
    frag.attack("Enemy");

    std::cout << "\n===== Damage Test =====\n";
    frag.takeDamage(30);

    std::cout << "\n===== Repair Test =====\n";
    frag.beRepaired(20);

    std::cout << "\n===== Special Ability Test =====\n";
    frag.highFivesGuys();

    std::cout << "\n===== Copy Constructor Test =====\n";
    FragTrap copy(frag);
    copy.attack("CopyEnemy");

    std::cout << "\n===== Assignment Operator Test =====\n";
    FragTrap other("Other");
    other = frag;
    other.attack("AssignedEnemy");

    std::cout << "\n===== End =====\n";

    return 0;
}