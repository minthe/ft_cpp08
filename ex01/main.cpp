/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:30:42 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/17 23:03:24 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"
#include <exception>
#include <iostream>

int main()
{
	{
		std::cout << "\n\x1b[47mTest 1 (from Subject)\x1b[0m\n"<< std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n\x1b[47mTest 2\x1b[0m\n"<< std::endl;
		try
		{
			Span sp = Span(61);
			sp.addNumber(4);
			sp.addNumber(6);
			sp.addNumber(7);
			std::cout << "size: " << sp.getSize() << std::endl;
			sp.fillRandom();
			std::cout << "size: " << sp.getSize() << std::endl;
			sp.printArray();
			std::cout << "size: " << sp.getSize() << std::endl;
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;

			std::cout << "\nsorted array: " << std::endl;
			sp.printArray();
		}
		catch (std::exception& e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}

	return 0;
}