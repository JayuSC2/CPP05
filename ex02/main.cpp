/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 17:15:08 by juitz             #+#    #+#             */
/*   Updated: 2025/01/08 14:23:29 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <exception>
#include <stdexcept>

int main(void)
{
	try
	{
		Form f1("Form1", 100, 50);
		Bureaucrat b1("Julian", 150);
		
		b1.signForm(f1);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	try
	{
		Form f1("Form1", 151, 50);
		Bureaucrat b2("Sujeong", 99);

		b2.signForm(f1);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}