/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:56:35 by jkollner          #+#    #+#             */
/*   Updated: 2024/02/17 12:33:17 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main() {
	Bureaucrat b1("B1", 135);
	Bureaucrat b2("B2", 42);
	Bureaucrat b3("B3", 2);
	ShrubberyCreationForm tr("tree");
	RobotomyRequestForm rr("robot");
	PresidentialPardonForm pr("president");
	try {
		tr.beSigned(b1);
		tr.execute(b1);
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
	try {
		//rr.beSigned(b3);
		rr.execute(b2);
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
	try {
		rr.beSigned(b2);
		rr.execute(b2);
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
	try {
		pr.beSigned(b3);
		pr.execute(b3);
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
}
