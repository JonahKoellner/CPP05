/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:14:13 by jkollner          #+#    #+#             */
/*   Updated: 2024/02/17 12:38:05 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
class Bureaucrat;
#include "AForm.hpp"

class Bureaucrat {
	private:
		const	std::string name;
		int 	grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);

		Bureaucrat& operator=(Bureaucrat const &copy);

		std::string	getName() const;
		int	getGrade() const;
		int	incrementGrade();
		int	decrementGrade();
		void signForm(AForm &form);
		void executeForm(AForm const & form);

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		~Bureaucrat();
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);
