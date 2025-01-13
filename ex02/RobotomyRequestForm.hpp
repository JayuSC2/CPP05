/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:08:43 by juitz             #+#    #+#             */
/*   Updated: 2025/01/13 17:20:56 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
//#include <ctime>

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		~RobotomyRequestForm();

		const std::string &getName() const override;
		const int &getSignGrade() const;
		const int &getExecGrade() const;
		const bool &getIsSigned() const;
		
		void beSigned(Bureaucrat bureaucrat);
		bool robotomization(const std::string &target);
		void execute(Bureaucrat const &executor) const override;
};