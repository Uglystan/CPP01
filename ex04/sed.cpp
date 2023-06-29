/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:16:35 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 17:31:24 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(std::string const & argv1) : _filename(argv1), _file_stream(_filename.c_str(), std::ios::in)
{
	_check_file();
	std::cout << "Constructor Sed called" << std::endl;
}

Sed::~Sed(void)
{
	std::cout << "Destructor Sed called" << std::endl;
}

void	Sed::_check_file(void)
{
	if (_file_stream.is_open() == 0)
	{
			_file_stream.close();
			std::cout << "Filename incorrect" << std::endl;
			exit (1);
	}
}

std::string	Sed::get_file(void)
{
	std::string	temp;
	std::string	str_file;

	while (getline(_file_stream, temp))
		str_file.append(temp + '\n');
	return (str_file);
}

void	Sed::ft_replace(std::string const & argv2, std::string const & argv3)
{
	int	pos;
	std::string const	replace = argv2;
	std::string const	substitue = argv3;
	std::string		str_file = get_file();

	_check_file();
	while (str_file.find(replace) <= str_file.length())
	{
		pos = str_file.find(replace);
		str_file.erase(pos, replace.length());
		str_file.insert(pos, substitue);
	}
	_put_in_newfile(str_file);
}

void	Sed::_put_in_newfile(std::string const str_file)
{
	std::ofstream	newfile_stream((_filename + ".replace").c_str(), std::ios::trunc);

	newfile_stream << str_file;
	_file_stream.close();
	newfile_stream.close();
}