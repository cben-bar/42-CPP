/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:30:58 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/19 17:28:16 by cben-bar         ###   ########.fr       */
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
	
	//------------------------------------LIST------------------------------------//

	std::clock_t	 start = std::clock();

	int	valL;
	for (int i = 1; i < ac; i++)
	{
		if (!Pmerge.isValidInput(av[i]))
			return 0;
		valL = atoi(av[i]);
        Pmerge.setList(valL);
	}
	
	std::list<int> lili = Pmerge.getList();
	std::cout << WHITE << "Before: " << std::endl;
	Pmerge.displayList(lili);

	
	lili = Pmerge.mergeSortLst(lili);
	
	std::cout << WHITE << "After: " << std::endl;
	Pmerge.displayList(lili);
	std::clock_t	 end = std::clock();

	double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << lili.size() << " elements with std::list : " << duration * 1000 << " us." << std::endl;
	

	
	//------------------------------------DEQUE------------------------------------//
	
	start = std::clock();

	int	valD;
	for (int i = 1; i < ac; i++)
	{
		if (!Pmerge.isValidInput(av[i]))
			return 0;
		valD = atoi(av[i]);
        Pmerge.setDeque(valD);
	}

	std::deque<int> dede = Pmerge.getDeque();
	std::cout << WHITE << "Before:" << std::endl;
	Pmerge.displayDeque(dede);
   
    dede = Pmerge.mergeSortDeque(dede, 0, dede.size() - 1);

	std::cout << WHITE << "After: " << std::endl;
	Pmerge.displayDeque(dede);
	end = std::clock();

	duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << dede.size() << " elements with std::deque : " << duration * 1000 << " us." << std::endl;
	
	

	return 0;
}