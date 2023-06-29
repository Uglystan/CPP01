/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:36:50 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 10:25:49 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
	public:

		Zombie(void);
		~Zombie(void);
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);
		void	announce(void);	

	private:

		std::string	name;

};

#endif