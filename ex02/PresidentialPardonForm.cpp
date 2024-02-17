/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:15:40 by jonahkollne       #+#    #+#             */
/*   Updated: 2024/02/17 12:29:52 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) : AForm(copy), target(copy.target) {
	*this = copy;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & copy) {
	this->target = copy.target;
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const {
	return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executer) const{
	try
	{
		AForm::canExecute(executer);
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

PresidentialPardonForm::~PresidentialPardonForm() {

}
