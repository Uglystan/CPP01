/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:23:10 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 09:20:51 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
	public:

		HumanA	(std::string new_name, Weapon& weapon);
		~HumanA	(void);
		void	attack(void);

	private:
		/*Ici arme est une reference sur une instance de la classe Weapon*/
		Weapon&	arme;
		std::string	name;
};

#endif