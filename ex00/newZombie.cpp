/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:15:51 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 10:24:35 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::newZombie(std::string name)/*Allocation dynamique pour utiliser le Zombie en dehors de la fonction donc repuerer son adresse sinon en sortie de fonction il est supprime*/
{
	Zombie *zombie;

	zombie = new Zombie;/*Malloc de zombie_ptr avec new (rappel de type)*/
	zombie->name = name;
	return (zombie);
}

