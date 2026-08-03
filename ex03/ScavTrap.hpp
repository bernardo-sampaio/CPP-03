/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 16:17:18 by bsampaio          #+#    #+#             */
/*   Updated: 2026/07/31 14:56:23 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
        private:
            
        public:
            ScavTrap();
            ScavTrap(std::string name);
            ScavTrap(const ScavTrap& obj);
            ScavTrap& operator=(const ScavTrap& obj);
            ~ScavTrap();
            void attack(const std::string& target);
            void guardGate(void);
};

#endif