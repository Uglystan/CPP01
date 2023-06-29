/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:12:50 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 09:13:45 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const& new_type) : type(new_type)
{
	std::cout << "Constructor Weapon called" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor Weapon called" << std::endl;
}

/*Cette fonction retourne une ref "&" constante "const" de type "std::string"
c'est a dire que on ne pourra pas modifier la valeur pointe par la reference
donc on ne pourra pas modifier le retour de getType()*/
const std::string&	Weapon::getType(void) const
{
	return (type);
}

void	Weapon::setType(std::string  new_type)
{
	type = new_type;
}