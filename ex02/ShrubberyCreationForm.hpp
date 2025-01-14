/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:25:53 by juitz             #+#    #+#             */
/*   Updated: 2025/01/13 17:21:02 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
/* 	private:
		std::string const _name;
		bool _isSigned;
		int const _signGrade;
		int const _execGrade; */
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();

		const std::string &getName() const override;
		const int &getSignGrade() const;
		const int &getExecGrade() const;
		const bool &getIsSigned() const;
		
		void beSigned(Bureaucrat bureaucrat);
		bool createShrubberyFile() const;
		void execute(Bureaucrat const &executor) const override;
};

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &SCF);