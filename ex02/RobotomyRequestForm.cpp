/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:13:48 by juitz             #+#    #+#             */
/*   Updated: 2025/01/13 14:44:24 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <bits/types/timer_t.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm("DefaultForm", 145, 137)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm (target, 72, 45)
{
	std::cout << "RobotomyRequestForm makes some drilling noises" << std::endl;
	robotomization(target);
	//std::cout << target << " has been robotomized"
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
        AForm::operator=(other);
    std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

const std::string &RobotomyRequestForm::getName() const
{
    return (AForm::getName());
}

bool RobotomyRequestForm::robotomization(const std::string &target)
{
	int random;
	srand(static_cast<unsigned int>(time(NULL)));
	random = rand();
	if (random % 2)
		return (std::cout << target << " has been robotomized" << std::endl, true);
	else
	 	return (std::cout << "Robotomy of " << target << " failed" << std::endl, false);
}