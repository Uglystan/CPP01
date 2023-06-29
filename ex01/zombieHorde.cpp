/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:29:03 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/18 14:50:34 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*horde_zombie;
	int	i;

	horde_zombie = new Zombie[N];
	for(i = 0; i < N; i++)
		horde_zombie[i].name = name;
	return (horde_zombie);
}