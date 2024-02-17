/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:12:37 by jkollner          #+#    #+#             */
/*   Updated: 2024/02/17 12:20:29 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("random_form"), gradeToSign(150), gradeToExecute(150) {
	this->_signed = false;
}

void AForm::canExecute(Bureaucrat const & executor) const {
	if (this->getGradeToExecute() < executor.getGrade()) {
		throw AForm::GradeTooLowException();
	}
	if (!this->getSigned()) {
		throw AForm::FormNotSignedException();
	}
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	this->_signed = false;
}

AForm::AForm(AForm const & copy) : name(copy.name), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute) {
	*this = copy;
}

AForm & AForm::operator=(AForm const & copy) {
	this->_signed = copy._signed;
	return (*this);
}

std::string AForm::getName() const {
	return (this->name);
}

bool AForm::getSigned() const {
	return (this->_signed);
}

int AForm::getGradeToSign() const {
	return (this->gradeToSign);
}

int AForm::getGradeToExecute() const {
	return (this->gradeToExecute);
}

void AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() > this->gradeToSign)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

const char* AForm::FormNotSignedException::what() const throw() {
	return ("Form is not signed");
}

std::ostream &operator<<(std::ostream &os, AForm const &b) {
	os << b.getName() << " is " << (b.getSigned() ? "signed" : "not signed") << " and requires a grade " << b.getGradeToSign() << " to sign and a grade " << b.getGradeToExecute() << " to execute.";
	return (os);
}

AForm::~AForm() {

}
