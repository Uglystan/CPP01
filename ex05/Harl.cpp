/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:42:24 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 19:51:01 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Constructor Harl called" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Destructor Harl called" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;
	/*Les 4 lignes ci-dessous servent a declarer des pointeurs sur fonction membre le nom des pointeurs sur fonction membre sont
	ptr_debug, ptr_info, ptr_warning, ptr_error comme les fonction font partie de la classe Harl il faut le preciser d'ou le "Harl::"
	devant, le premier void signifie aue la fonction ne renvoie rien et le dernier qu'elle ne prend rien en parametre*/
	void	(Harl::*ptr_debug)(void);
	void	(Harl::*ptr_info)(void);
	void	(Harl::*ptr_warning)(void);
	void	(Harl::*ptr_error)(void);
	/*Ci-dessous on declare un double tableau de char avec a l'interieur chaque input possible pour l'arguement de la fonction level*/
	char	tab_index[4][8] = {
					{'D', 'E', 'B', 'U', 'G', '\0'},
					{'I', 'N', 'F', 'O', '\0'},
					{'W', 'A', 'R', 'N', 'I', 'N', 'G', '\0'},
					{'E', 'R', 'R', 'O', 'R', '\0'}
				};
	/*Les 4 lignes ci-dessous attribut a chaque pointeur sur fonction membre l'adresse de la fonction membre correspondante
	donc pour ptr_debug on lui donne l'adresse de la fonction _debug, comme cette fonction fait partie de la classe Harl on le precise avec le "Harl::"*/
	ptr_debug = &Harl::_debug;
	ptr_info = &Harl::_info;
	ptr_warning = &Harl::_warning;
	ptr_error = &Harl::_error;
	/*La ligne ci-desous creer un tableau de type Harll::* de taille 4  et assigne dans ce tableau les pointeurs sur fonction membre de chaque fonction,
	le tableau doit etre de type Harl le void au tout debut de la ligne indique le type de retour c'est essentiel pour creer un tableu de pointeur sur fonction que toute les fonctions pointe par les pointeurs retourne le meme type ici void
	le dernier void ici correspond au type de parametre aue prenne les fonction de ce tableau elles doivent toute etre identique ici void de maniere plus generale pour creer un tableau de pointeur sur fonction il faut necessairement que le signature
	de toute les fonctions que l'on veut mettre a l'interieur soit la meme (signature = type de retour et type d'argument)*/
	void	(Harl::*tab_ptr_ft[4])(void) = {ptr_debug, ptr_info, ptr_warning, ptr_error};
	
	i = 0;
	/*Ci-dessous on cherche dans le tableu d'input quand l'argument level correspond a un input*/
	while (level != tab_index[i] && i < 4)
		i++;
	/*Ci-dessous une fois l'input trouve on appel la foncton correspondante du tableau de pointeur sur fonction membre
	on utilise ici this car il fait reference a l'intance courante de la classe les 2 parentheses a la fin servent a passer
	des arguments a la fonction ici comme nos fonction sont prototype pour ne pas en prendre on laisse vide*/
	if (i < 4)
		(this->*tab_ptr_ft[i])();
	else
		std::cout << "Mesage not found" << std::endl;
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}