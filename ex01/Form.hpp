/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:52:10 by juitz             #+#    #+#             */
/*   Updated: 2025/01/08 13:22:41 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form
{
	private:
		std::string const _name;
		bool _isSigned;
		int const _signGrade;
		int const _execGrade;
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
		Form();
		Form(const std::string &name, int const &signGrade, int const &execGrade);
		Form(const Form &copy);
		Form &operator=(const Form &other);
		~Form();
	
		const std::string &getName() const;
		const int &getSignGrade() const;
		const int &getExecGrade() const;
		const bool &getIsSigned() const;
		
		void beSigned(Bureaucrat bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form &form);