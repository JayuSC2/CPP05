/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:21:08 by juitz             #+#    #+#             */
/*   Updated: 2025/01/13 14:38:14 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("DefaultForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm (target, 145, 137)
{
	std::cout << "ShrubberyCreationForm init constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
        AForm::operator=(other);
    std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

const std::string &ShrubberyCreationForm::getName() const
{
    return (AForm::getName());
}

bool ShrubberyCreationForm::createShrubberyFile() const
{
	std::ofstream outFile(getName() + "_shrubbery");
	if (!outFile)
		return (std::cerr << "Error creating file: " << getName() + "_shrubbery" << std::endl, true);
	return (false);
}

