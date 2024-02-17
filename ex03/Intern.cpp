/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:47:39 by jonahkollne       #+#    #+#             */
/*   Updated: 2024/02/17 14:56:54 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm* Intern::_createShrubberyCreationForm(std::string target) {
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::_createRobotomyRequestForm(std::string target) {
	return (new RobotomyRequestForm(target));
}

AForm* Intern::_createPresidentialPardonForm(std::string target) {
	return (new PresidentialPardonForm(target));
}

Intern::Intern() {
	_knownForms["shrubbery creation"] = _createShrubberyCreationForm;
	_knownForms["robotomy request"] = _createRobotomyRequestForm;
	_knownForms["presidential pardon"] = _createPresidentialPardonForm;
}

Intern::Intern(const Intern& other) {
	*this = other;
}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return *this;
}

AForm* Intern::makeForm(std::string formName, std::string target) {
	if (_knownForms.find(formName) == _knownForms.end()) {
		std::cout << "Form not found" << std::endl;
		return (NULL);
	}
	return (_knownForms[formName](target));
}

Intern::~Intern() {
}
