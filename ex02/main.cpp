/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 17:15:08 by juitz             #+#    #+#             */
/*   Updated: 2025/01/09 18:43:27 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <exception>
#include <stdexcept>

int main(void)
{
	RobotomyRequestForm Bot1("testbot");
	RobotomyRequestForm Bot2("testbot2");
	
	Bot1.robotomization("testbot2");
/* 	
	ShrubberyCreationForm file1("testfile");

	file1.createShrubberyFile();

	try
	{
		ShrubberyCreationForm f1("Form1");
		Bureaucrat b1("Julian", 150);
		
		b1.signForm(f1);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	try
	{
		ShrubberyCreationForm f1("Form1");
		Bureaucrat b2("Sujeong", 99);

		b2.signForm(f1);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} */
	return (0);
}