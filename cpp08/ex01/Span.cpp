/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:05:33 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/09 20:36:10 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

Span::Span(): _nElements(0), _place(0)
{
	return;
}

Span::Span(unsigned int n): _nElements(0), _place(n)
{
	std::cout << MAGENTA << "Span has been created with " << n << " elements." << std::endl;
	return;
}

Span::Span(const Span &origin)
{
	_nElements = origin._nElements;
	_array = origin._array;
	*this = origin;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Span	&Span::operator=(const Span &origin)
{
	if (this == &origin)
		return (*this);
	_nElements = origin.getNElements();
	_array = origin._array;
	return (*this);
}

std::ostream&	operator<<(std::ostream &o, Span const &rhs)
{
	unsigned int i = -1;

	while (++i < rhs.getPlaces())
	{
		if (i == rhs.getPlaces() - 1)
			o << rhs.getValue(i);
		else
			o << rhs.getValue(i) << ", ";
	}
	o << std::endl;
	return (o);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Span::~Span()
{
    return;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

unsigned int Span::getNElements() const
{
	return(this->_nElements);
}

unsigned int Span::getPlaces() const
{
	return(this->_place);
}

int	Span::getValue(unsigned int i) const
{
	return(_array.at(i));
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////

void	Span::addNumber(int n)
{
	if (_nElements < _place)
	{
		_array.push_back(n);
		_nElements++;
	}
	else
		throw ElementFull();
}

int randomNumber()
{
	return (std::rand()%100);
}

void	Span::addNumber()
{
	srand(time(NULL));
	_array.assign(_place, 0);
	std::generate(_array.begin(), _array.end(), randomNumber);
}

int	Span::shortestSpan()
{
	int					diff = INT_MAX;
	int					tempDiff = 0;
	unsigned int		i = -1;
	std::vector<int>	tempVector = this->_array;

	if (this->_place <= 1)
		throw MissingElement();

	sort(tempVector.begin(), tempVector.end(), std::greater<int>());

	while(++i < this->_place - 1)
	{
		if(tempVector.at(i) > tempVector.at(i + 1))
			tempDiff = tempVector.at(i) - tempVector.at(i + 1);
		else
			tempDiff = tempVector.at(i + 1) - tempVector.at(i);

		if(tempDiff < diff)
			diff = tempDiff;
	}

	return (diff);
}

int	Span::longestSpan()
{
	std::vector<int>	tempVector = this->_array;
	int					longestSpan = 0;

	if (this->_place <= 1)
		throw MissingElement();

	sort(tempVector.begin(), tempVector.end(), std::greater<int>());

	longestSpan = tempVector.front() - tempVector.back();

	return (longestSpan);
}

///////////////////////////////////////
//*/ */ */ */ EXCEPTIONS  /* /* /* /*//
///////////////////////////////////////

const char *Span::ElementFull::what() const throw()
{
	return ("Exception: Elements are already full");
}

const char *Span::MissingElement::what() const throw()
{
	return ("Exception: Too many element.");
}