/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:37:55 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 20:34:41 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class	Harl
{
	public :
		Harl(void);
		~Harl(void);
		void	complain(std::string level, int level_filtre);
		int	set_level_filtre(std::string const& filtre);
	
	private :
		
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
		
};

#endif