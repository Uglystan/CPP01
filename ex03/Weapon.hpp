/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:06:02 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 09:21:54 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
		/*Pour eviter de "copie" inutilement la chaine qui est en char * en string 
		on prend directement une reference sur cette chaine qui est constante cela evite de la "copier 2 fois"
		on aurait pu prototyper le constructeur differement comme "Weapon(std::string type);" on aurait alors copier 2 fois la chaine mais cela reste correcte*/
		Weapon	(std::string const& type);
		~Weapon	(void);
		/*Premier const c'est la valeur ref "&" qui est constante donc on ne peut pas modifier le retour de getType
		Le const a la fin de la fonction signifie que l'on passe un "pacte" qui dit que dans cette fonction l'instance
		sera constante donc on ne pourra pas modifier les attributs membre de l'instance dans cette fonction soit la valeur pointe par
		this sera constante. a savoir que le pointeur this est constant sont n'adresse ne peut jamais etre modifier*/
		const std::string&	getType(void) const;
		void	setType(std::string  new_type);
	
	private:

		std::string type;
		
};

#endif