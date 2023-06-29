/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:15:58 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/29 20:36:42 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl	Harl;

		Harl.complain("DEBUG", Harl.set_level_filtre(argv[1]));
		Harl.complain("INFO", Harl.set_level_filtre(argv[1]));
		Harl.complain("WARNING", Harl.set_level_filtre(argv[1]));
		Harl.complain("ERROR", Harl.set_level_filtre(argv[1]));
		Harl.complain("ERror", Harl.set_level_filtre(argv[1]));
	}
	else
		std::cout << "Nbr arg invalid" << std::endl;
}