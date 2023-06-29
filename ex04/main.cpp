/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:25:36 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 11:52:12 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream	file_stream(argv[1], std::ios::in);//Lie le stream file_stream avec le nom de fichier specifier on l'ouvre en mode lecture avec ios::in
		std::string	str_file;
		std::string	temp;
		int		pos;
		
		if (file_stream.is_open() == 0)
			return (std::cout << "Filename incorrect" << std::endl, 1);
		while (getline(file_stream, temp))//getline sert a mettre dans temp une ligne de file_stream
			str_file.append(temp + '\n');//Ici avec append on ajoute a la fin de la string str_file la string temp avec un '\n'
		while (str_file.find(argv[2]) != str_file.length())
		{
			erase et insert;
			pos = str_file.find(argv[2]);
		}
		std::cout << str_file;
		file_stream.close();
		return (0);
	}
}