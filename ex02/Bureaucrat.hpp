/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:29:55 by juitz             #+#    #+#             */
/*   Updated: 2025/01/08 14:59:10 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"
class AForm;

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);

		const std::string &getName() const;
		void setName(const std::string &name);
		
		const int &getGrade() const;
		void setGrade(int grade);
		void IncrementGrade();
		void DecrementGrade();
		void signForm(AForm &form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);