/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:58:02 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/13 14:03:03 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>


int	sed(std::string filename, std::string s1, std::string s2)
{
		std::ifstream	ifs_read(filename);
		std::string		line;
		std::size_t		found_i;

		if (ifs_read.fail())
		{
			std::cout << "Error : read access denied" << std::endl;
			ifs_read.close();
			return (1);
		}
		std::ofstream	ofs_write(filename + ".replace");
		while (std::getline(ifs_read, line))
		{
			found_i = line.find(s1);
			while (found_i != std::string::npos)
			{
				if (!found_i && !s1.size())
					break;
				line.erase(found_i, s1.length());
				line.insert(found_i, s2);
				found_i += s2.size();
				found_i = line.find(s1, found_i);
			}
			ofs_write << line << std::endl;
		}
		ifs_read.close();
		ofs_write.close();
		return (0);
}
int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "This programm takes a filename, and 2 strings" << std::endl;
		return (0);
	}
	else
		sed(av[1], av[2], av[3]);
	return (0);
}