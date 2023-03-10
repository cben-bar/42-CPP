/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:05:33 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/10 11:32:45 by cben-bar         ###   ########.fr       */
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
	_nElements = origin._nElements;
	_array = origin._array;
	return (*this);
}

std::ostream&	operator<<(std::ostream &o, Span const &rhs)
{

	for (unsigned int i = 0; i < rhs.getPlaces(); i++)
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
	_nElements = _array.size();
}

int	Span::shortestSpan()
{
	int					shortestSpan = INT_MAX;
	int					tempDiff = 0;
	std::vector<int>	tmpV = this->_array;

	if (this->_place <= 1)
		throw MissingElement();

	sort(tmpV.begin(), tmpV.end(), std::greater<int>());

	for (unsigned int i = 0; i < this->_place - 1; i++)
	{
		if(tmpV.at(i) > tmpV.at(i + 1))
			tempDiff = tmpV.at(i) - tmpV.at(i + 1);
		else
			tempDiff = tmpV.at(i + 1) - tmpV.at(i);

		if(tempDiff < shortestSpan)
			shortestSpan = tempDiff;
	}

	return (shortestSpan);
}

int	Span::longestSpan()
{
	int					longestSpan = 0;
	std::vector<int>	tmpV = this->_array;
	if (this->_place <= 1 || this->_nElements < 2)
		throw MissingElement();

	sort(tmpV.begin(), tmpV.end(), std::greater<int>());
	longestSpan = tmpV.front() - tmpV.back();
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