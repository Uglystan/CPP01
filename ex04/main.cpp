/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:25:36 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 17:15:22 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include "sed.hpp"

//A faire metrre les commentaire dans le point cpp

// int	main(int argc, char **argv)
// {
// 	if (argc == 4)
// 	{
// 		std::string	filename = argv[1];
// 		std::string	replace = argv[2];
// 		std::string	substitue = argv[3];
// 		std::ifstream	file_stream(filename.c_str(), std::ios::in);//Lie le stream file_stream avec le nom de fichier specifier on l'ouvre en mode lecture avec ios::in ici on utilise le .c_str pour convertir le type std::string en const char *
// 		std::ofstream	newfile_stream((filename + ".replace").c_str(), std::ios::trunc);
// 		std::string	str_file;
// 		std::string	temp;
// 		int		pos;
		
// 		if (file_stream.is_open() == 0)
// 			return (std::cout << "Filename incorrect" << std::endl, 1);
// 		while (getline(file_stream, temp))//getline sert a mettre dans temp une ligne de file_stream
// 			str_file.append(temp + '\n');//Ici avec append on ajoute a la fin de la string str_file la string temp avec un '\n'
// 		while (str_file.find(replace) <= str_file.length())//find cherche la premiere occurence dans la chaine str.file de argv[2] renvoie npos (taille totale de la chaine) si pas d'occurence sinon renvoie la position de l'occurence
// 		{
// 			pos = str_file.find(replace);//Stockage de la position de l'occurence trouve avec find
// 			str_file.erase(pos, replace.length());//Erase supprime a partir de pos sur une longueur donne ici replace.length() soit la longueur du l'argument qui doit se faire remplacer
// 			str_file.insert(pos, substitue);//Insert insert a une position ici pos une chaine de caractere ici l'argument qui dois remplacer argv[3]
// 		}
// 		newfile_stream << str_file;
// 		file_stream.close();
// 		newfile_stream.close();
// 		return (0);
// 	}
// 	else
// 		std::cout << "Incorrect nbr arg" << std::endl;
// }

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		Sed sed(argv[1]);
		sed.ft_replace(argv[2], argv[3]);
	}
	else
		std::cout << "Incorrect nbr arg" << std::endl;
}