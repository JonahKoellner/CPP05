/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:19:08 by jkollner          #+#    #+#             */
/*   Updated: 2023/11/09 18:36:14 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
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
		AForm(Form const & copy);

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
