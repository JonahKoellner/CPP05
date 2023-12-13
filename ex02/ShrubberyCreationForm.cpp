/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:33:15 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/12/13 15:22:09 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) : AForm(copy), target(copy.target) {
	*this = copy;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & copy) {
	this->target = copy.target;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const {
	return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executer) const {
	if (this->getGradeToExecute() > executer.getGrade()) {

	}
	std::ofstream file;
	file.open((this->target + "_shrubbery").c_str());
	std::string tree = "      /\\\n     /\\*\\\n    /\\O\\*\\\n   /*/\\/\\/\\\n  /\\O\\/\\*\\/\\\n /\\*\\/\\*\\/\\/\\\n/\\O\\/\\/*/\\/O/\\\n      ||\n      ||\n      ||";
	if (file.is_open()) {
		file << tree;
		file.close();
	}
	else {
		std::cout << "Error opening file" << std::endl;
	}
}
