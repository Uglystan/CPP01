/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:28:04 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 10:20:14 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*ptr = NULL;
	int	i;

	ptr = ptr->zombieHorde(10, "Test");
	for(i = 0; i < 10; i++)
		ptr[i].announce();
	delete[] ptr;
}