/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:14:13 by jkollner          #+#    #+#             */
/*   Updated: 2023/12/13 15:08:10 by jkollner         ###   ########.fr       */
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
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat& operator=(Bureaucrat const &copy);
		std::string	getName() const;
		int	getGrade() const;
		int	incrementGrade();
		int	decrementGrade();
		void	signForm(AForm &form);
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