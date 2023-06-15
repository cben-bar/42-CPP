/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:30:58 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/15 19:23:28 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << PASTEL_PURPLE << "Error" << std::endl;
		return 0;
	}
	PmergeMe Pmerge;
	int	val;
	for (int i = 1; i < ac; i++)
	{
		if (!Pmerge.isValidInput(av[i]))
			return 0;
		val = atoi(av[i]);
        Pmerge.setDeque(val);
        Pmerge.setList(val);
	}
	Pmerge.run();
	return 0;
}