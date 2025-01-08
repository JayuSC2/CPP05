/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 19:00:15 by juitz             #+#    #+#             */
/*   Updated: 2025/01/08 14:26:07 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _signGrade(0), _execGrade(0)
{
	std::cout << "AForm default constructor called" << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("AForm grade too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("AForm grade too low!");
}

AForm::AForm(const std::string &name, int const &signGrade, int const &execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
	else if(_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
}

AForm::~AForm()
{
	std::cout << "AForm default destructor called" << std::endl;
}

const std::string &AForm::getName() const
{
	return (_name);
}

const int &AForm::getSignGrade() const
{
	return (_signGrade);
}

const int &AForm::getExecGrade() const
{
	return (_execGrade);
}

const bool &AForm::getIsSigned() const
{
	return (_isSigned);
}

std::ostream &operator<<(std::ostream &out, const AForm &Aform)
{
	out << Aform.getName() << ", Signed: " << Aform.getIsSigned() << " grade required to sign: " << Aform.getSignGrade() << ", grade required to execute: " << Aform.getExecGrade();
	return (out);
}

void AForm::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_signGrade)
		this->_isSigned = true;
	else
	 	throw GradeTooLowException();
}