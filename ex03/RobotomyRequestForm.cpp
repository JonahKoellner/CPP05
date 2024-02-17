/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:15:40 by jonahkollne       #+#    #+#             */
/*   Updated: 2024/02/17 12:55:28 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) : AForm(copy), target(copy.target) {
	*this = copy;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & copy) {
	this->target = copy.target;
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const {
	return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executer) const{
	(void)executer;
	std::cout << "Brrrrrr <insert Drilling noice> Brrrrrr" << std::endl;
	srand(time(NULL));
	std::cout << this->target << " has" << (rand() % 2 == 0 ? "" : " not") << " been robotomized successfully" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}
