/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:30:58 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/16 16:06:12 by cben-bar         ###   ########.fr       */
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
	std::list<int> lili = Pmerge.getList();

	
	std::cout << WHITE << "Before: " << std::endl;
	Pmerge.displayList(lili);


	lili = Pmerge.mergeSort(lili);
	
	std::cout << WHITE << "After: " << std::endl;
	Pmerge.displayList(Pmerge.getList());
	
	return 0;
}