/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:33:15 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/11/10 11:52:56 by jonahkollne      ###   ########.fr       */
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
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
