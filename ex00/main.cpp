/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 17:15:08 by juitz             #+#    #+#             */
/*   Updated: 2025/01/04 18:41:20 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <stdexcept>

int main(void)
{
	try
	{
		Bureaucrat b1("Julian", 151);
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat b2("Daniel", 0);
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	
	try
    {
        Bureaucrat b3("Alice", 50);
        std::cout << b3 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

	try
	{
		Bureaucrat b4("Johnny", 150);
		b4.DecrementGrade();
		std::cout << b4 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

		try
	{
		Bureaucrat b5("Johnny", 1);
		b5.IncrementGrade();
		std::cout << b5 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}