/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:40:02 by juitz             #+#    #+#             */
/*   Updated: 2025/01/08 16:45:47 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat grade too low!");
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		//this->_name = other._name;
		this->_grade = other._grade;
	}	
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	return (*this);
}

const std::string &Bureaucrat::getName() const
{
	return (_name);
}

/* void Bureaucrat::setName(const std::string &name)
{
	this->_name = name;
} */

const int &Bureaucrat::getGrade() const
{
	return (_grade);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}

/* void Bureaucrat::GradeTooLowException()
{
		throw std::out_of_range("Grade too low");
}

void Bureaucrat::GradeTooHighException()
{
		throw std::out_of_range("Grade too high");
} */

void Bureaucrat::IncrementGrade()
{
	_grade -= 1;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::DecrementGrade()
{
	_grade += 1;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

void Bureaucrat::signForm(AForm &Aform)
{
	if (!Aform.getIsSigned() && (this->getGrade() <= Aform.getSignGrade()))
	{
		Aform.beSigned(*this);
		std::cout << _name << " signed " << Aform.getName() << std::endl;
	}
	else if (Aform.getIsSigned())
		std::cout << _name << " couldn't sign " << Aform.getName() << " because the Aform is already signed." << std::endl;
	else if (this->getGrade() > Aform.getSignGrade())
		std::cout << _name << " couldn't sign " << Aform.getName() << " because grade is too low." << std::endl;
}

