/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 19:00:15 by juitz             #+#    #+#             */
/*   Updated: 2025/01/08 14:17:24 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _signGrade(0), _execGrade(0)
{
	std::cout << "Form default constructor called" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Form grade too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Form grade too low!");
}

Form::Form(const std::string &name, int const &signGrade, int const &execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
	else if(_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
}

Form::~Form()
{
	std::cout << "Form default destructor called" << std::endl;
}

const std::string &Form::getName() const
{
	return (_name);
}

const int &Form::getSignGrade() const
{
	return (_signGrade);
}

const int &Form::getExecGrade() const
{
	return (_execGrade);
}

const bool &Form::getIsSigned() const
{
	return (_isSigned);
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << ", Signed: " << form.getIsSigned() << " grade required to sign: " << form.getSignGrade() << ", grade required to execute: " << form.getExecGrade();
	return (out);
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_signGrade)
		this->_isSigned = true;
	else
	 	throw GradeTooLowException();
}