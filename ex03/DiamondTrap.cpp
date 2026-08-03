/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:21:18 by bsampaio          #+#    #+#             */
/*   Updated: 2026/07/31 15:09:13 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), ScavTrap(), FragTrap()
{
    this->name = "Default";
    this->hitPoints = 100;
    this->attackDamage = 30;
    this->energyPoints = 50;
    std::cout<<"DiamondTrap default construtor called.\n";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hitPoints = 100;
    this->attackDamage = 30;
    this->energyPoints = 50;
    std::cout<<"DiamondTrap construtor called.\n";
}
DiamondTrap::DiamondTrap(const DiamondTrap& obj): ClapTrap(obj),
ScavTrap(obj),FragTrap(obj), name(obj.name)
{
    std::cout<<"DiamondTrap copy construtor called.\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    if (this != &obj)
    {
        this->ClapTrap::operator=(obj);
        ClapTrap::name = obj.ClapTrap::name;
        this->name = obj.name;
    }
    std::cout<<"DiamondTrap assignment operator called.\n";
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"DiamondTrap "<<this->name<<" destructor called.\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: "<<this->name<<", ClapTrap name: "<<ClapTrap::name<<std::endl;
}