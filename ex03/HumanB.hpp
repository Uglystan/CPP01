/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:41:54 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 09:21:13 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
	public:
		HumanB	(std::string name);
		~HumanB (void);
		void	attack(void) const;
		void	setWeapon(Weapon& weapon);

	private:

		Weapon const	*arme;//Ici on peut mettre soit le pointeur en const "Weapon * const arme" a savoir que const met en const le "truc" a sa gauche ou toute l'instance de la classe arme en const "Weapon const * arme" et aussi accepte "const Weapon * arme" car comme rien a gauche le const prend a droite
		std::string	name;
};
#endif