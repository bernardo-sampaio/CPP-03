/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 16:16:54 by bsampaio          #+#    #+#             */
/*   Updated: 2026/07/29 12:17:40 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout<<"ScavTrap default constructor called.\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap construtor called.\n";
}
ScavTrap::ScavTrap(const ScavTrap& obj): ClapTrap(obj)
{
    std::cout << "ScavTrap copy construtor called.\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    if (this != &obj)
        ClapTrap::operator=(obj);
    std::cout << "ScavTrap assignment operator called\n";
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap "<<this->name<<" destructor called\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints  == 0 || this->energyPoints  == 0)
    {
        std::cout << "ScavTrap "<<this->name<<" cannot attack "
        << target <<", because it has no hit points or no energy points\n";
    }
    else
    {
        this->energyPoints--;
        std::cout<<"ScavTrap "<<this->name<<" attacks "<<target<<", causing "<<this->attackDamage<<" points of damage!\n";   
    }
}

void ScavTrap::guardGate(void)
{
    std::cout<<"ScavTrap "<<this->name<< " is now in Gate Keeper mode.\n";
}