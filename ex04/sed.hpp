/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:02:03 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 17:33:06 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

class Sed
{
	public :

		Sed(std::string const & filename);
		~Sed(void);
		void		ft_replace(std::string const & argv2, std::string const & argv3);
		std::string	get_file(void);

	private :

		void			_check_file(void);
		void			_put_in_newfile(std::string const str_file);

		std::string const	_filename;
		std::ifstream		_file_stream;
};

#endif