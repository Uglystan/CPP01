/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:16:35 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 09:40:56 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)/*Zombie supprimer a la fin de la fonction*/
{
	Zombie	zombie;
	zombie.name = name;
	zombie.announce();
	return ;
}