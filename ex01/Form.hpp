/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:19:08 by jkollner          #+#    #+#             */
/*   Updated: 2023/11/08 12:32:35 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
class Form;
#include "Bureaucrat.hpp"

class Form {
	private:
		const	std::string name;
		bool	_signed;
		const	int gradeToSign;
		const	int gradeToExecute;
	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const & copy);

		Form & operator=(Form const & copy);

		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		void beSigned(Bureaucrat & b);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		~Form();
};

std::ostream &operator<<(std::ostream &os, Form const &b);
