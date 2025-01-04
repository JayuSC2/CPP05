/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:29:55 by juitz             #+#    #+#             */
/*   Updated: 2025/01/04 19:39:19 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);

		const std::string &getName() const;
		void setName(const std::string &name);
		
		const int &getGrade() const;
		void setGrade(int grade);

		void GradeTooHighException();
		void GradeTooLowException();
		void IncrementGrade();
		void DecrementGrade();
		void signForm();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);