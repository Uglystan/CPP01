/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:22:51 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/28 18:42:06 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon& weapon) : arme(weapon), name(new_name)
{
	std::cout << "Constructor HumanA called" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor HUmanA called" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << name << " attack with their weapon " << arme.getType() << std::endl;
}
