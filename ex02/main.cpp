/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:55:55 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/18 15:03:42 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	message = "HI THIS IS BRAIN";
	std::string	*stringPTR = &message;
	std::string	&stringREF = message;

	std::cout << &message << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << message << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}