/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 19:00:15 by juitz             #+#    #+#             */
/*   Updated: 2025/01/04 19:34:26 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _signGrade(0), _execGrade(0)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string &name, int const &signGrade, int const &execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	if (_signGrade > 150 || _execGrade > 150)
		GradeTooLowException();
	else if(_signGrade < 1 || _execGrade < 1)
		GradeTooHighException();
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
}