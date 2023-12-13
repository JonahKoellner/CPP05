/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:12:37 by jkollner          #+#    #+#             */
/*   Updated: 2023/12/13 15:29:17 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign > 150)
		throw Bureaucrat::GradeTooLowException();
	if (gradeToSign < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_signed = false;
}

Form::Form(Form const & copy) : name(copy.name), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute) {
	*this = copy;
}

Form & Form::operator=(Form const & copy) {
	this->_signed = copy._signed;
	return (*this);
}

std::string Form::getName() const {
	return (this->name);
}

bool Form::getSigned() const {
	return (this->_signed);
}

int Form::getGradeToSign() const {
	return (this->gradeToSign);
}

int Form::getGradeToExecute() const {
	return (this->gradeToExecute);
}

void Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

Form::~Form() {

}

std::ostream &operator<<(std::ostream &os, Form const &b) {
	os << b.getName() << " is " << (b.getSigned() ? "signed" : "not signed") << " and requires a grade " << b.getGradeToSign() << " to sign and a grade " << b.getGradeToExecute() << " to execute.";
	return (os);
}
