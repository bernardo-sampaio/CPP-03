/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 12:04:51 by bsampaio          #+#    #+#             */
/*   Updated: 2026/07/30 15:36:33 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), hitPoints(10),
energyPoints(10), attackDamage(0)
{
    std::cout<<"ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(std::string name): hitPoints(10),
energyPoints(10), attackDamage(0)
{
    this->name = name;
    std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& obj):  name(obj.name),
hitPoints(obj.hitPoints),
energyPoints(obj.energyPoints),
attackDamage(obj.attackDamage)
{
    std::cout << "ClapTrap copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "ClapTrap assignment operator called\n";
    if (this !=  &obj)
    {
        this->name = obj.name;
        this->hitPoints = obj.hitPoints;
        this->energyPoints = obj.energyPoints;
        this->attackDamage = obj.attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap "<<this->name<<" destructor called.\n";
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hitPoints  == 0 || this->energyPoints  == 0)
    {
        std::cout << "ClapTrap "<<this->name<<" cannot attack"
        << target <<", because it has no hit points or no energy points.\n";
    }
    else
    {
        this->energyPoints--;
        std::cout << "ClapTrap "<<this->name<<" attacks " << target << ", causing "<<this->attackDamage<< " points of damage!\n";   
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints == 0)
        std::cout << "ClapTrap "<<this->name<<" cannot take damage because it has no hit points left.\n";
    if (this->hitPoints < amount)
    {
        this->hitPoints = 0;
        std::cout << "ClapTrap "<<this->name<<" takes "<<amount<<" damage and is destroyed.\n";
    }
    else
    {
        this->hitPoints -= amount;
        std::cout << "ClapTrap "<<this->name<<" takes "<<amount<<" damage.\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints == 0 || this->energyPoints == 0)
        std::cout << "ClapTrap "<<this->name<<" can't be repaired.\n";
    else
    {
        this->hitPoints += amount;
        this->energyPoints--;
        std::cout<<"ClapTrap "<<this->name<<" repaired itself for "<<amount<<" hit points.\n";
    }
}
