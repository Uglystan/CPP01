/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:20:29 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/18 14:36:45 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
#include <string>

class	Zombie
{
	public:

		Zombie(void);
		~Zombie(void);
		void	announce(void);
		Zombie	*zombieHorde(int N, std::string name);

	private:

		std::string name;
		
};

#endif