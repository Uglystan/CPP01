/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:44:28 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 09:06:21 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*A la construction de la classe tout les attribut membre doivent etre initialise
soit dans la liste d'initialisation soit dans la portee de la fonction*/
HumanB::HumanB(std::string new_name) : arme(NULL), name(new_name)
{
	std::cout << "Constructor HumanB called" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor HumanB called" << std::endl;
}

/*Ici on peut mettre const car on ne modifie pas les attribut menbre de la classe a l'interieur de cette fonction et 
de plus il faut s'assurer quand on met const que tout les fonction utilise dans la fonction sont elle aussi const et 
s'assure de ne pas modifier les attribut membre ici on a bien getType() qui est const*/
void	HumanB::attack(void) const
{
	/*Ici le + est une surchage d'operateur defini dans la class string il va concatener les 2 parties 
	ensuite on a une condititon ternaire traduction : "Si arme == NULL alors on concatene "nothing" 
	sinon on concatene le retour de arme.getType()"*/
	std::cout << name << " attack with " + (arme == NULL ? "nothing" : arme->getType()) << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	arme = &weapon;
}
