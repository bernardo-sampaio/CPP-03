/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:00:20 by bsampaio          #+#    #+#             */
/*   Updated: 2026/07/30 15:34:56 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap default construtor called.\n";   
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap construtor called.\n";
}
FragTrap::FragTrap(const FragTrap& obj): ClapTrap(obj)
{
    std::cout << "FragTrap copy construtor called.\n";
}
FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    if (this != &obj)
        ClapTrap::operator=(obj);
    std::cout << "FragTrap assignment operator called.\n";
    return (*this);
}
FragTrap::~FragTrap()
{
    std::cout<<"FragTrap "<<this->name<<" destructor called.\n";
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap "<<this->name<< " wants a high-five!\n";
}