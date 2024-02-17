/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:19:08 by jkollner          #+#    #+#             */
/*   Updated: 2023/12/13 15:08:21 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
class AForm;
#include "Bureaucrat.hpp"

class AForm {
	private:
		const	std::string name;
		bool	_signed;
		const	int gradeToSign;
		const	int gradeToExecute;
	public:
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(AForm const & copy);

		AForm & operator=(AForm const & copy);

		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		virtual void execute(Bureaucrat const & executor) const = 0;

		void beSigned(Bureaucrat & b);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		~AForm();
};

std::ostream &operator<<(std::ostream &os, AForm const &b);