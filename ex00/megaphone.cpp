/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:45:21 by jbrandt           #+#    #+#             */
/*   Updated: 2025/06/26 17:59:37 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <string>

void	print_megaphone(const std::string str)
{
	for (std::string::const_iterator it = str.cbegin(); it < str.cend(); ++it)
		std::cout << char(std::toupper(*it));
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	
	for (int i = 1; i < argc; i++)
		print_megaphone(argv[i]);

	std::cout << std::endl;
	return (0);
}
