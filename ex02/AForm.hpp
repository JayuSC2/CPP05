/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:52:10 by juitz             #+#    #+#             */
/*   Updated: 2025/01/08 14:27:31 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class AForm
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
		AForm();
		AForm(const std::string &name, int const &signGrade, int const &execGrade);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &other);
		virtual ~AForm();
	
		virtual const std::string &getName() const = 0;
		const int &getSignGrade() const;
		const int &getExecGrade() const;
		const bool &getIsSigned() const;
		
		void beSigned(Bureaucrat bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const AForm &Aform);