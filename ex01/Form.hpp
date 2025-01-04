/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:52:10 by juitz             #+#    #+#             */
/*   Updated: 2025/01/04 19:37:54 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
	private:
		std::string const _name;
		bool _isSigned;
		int const _signGrade;
		int const _execGrade;
	public:
		Form();
		Form(const std::string &name, int const &signGrade, int const &execGrade);
		Form(const Form &copy);
		Form &operator=(const Form &other);
		~Form();

		const std::string &getName() const;
		const int &getSignGrade() const;
		const int &getExecGrade() const;
		const bool &getIsSigned() const;
		
		void GradeTooHighException();
		void GradeTooLowException();
		void beSigned(Bureaucrat bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form &form);