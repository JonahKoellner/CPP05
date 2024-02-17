/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:56:35 by jkollner          #+#    #+#             */
/*   Updated: 2024/02/17 11:46:43 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main() {
	Bureaucrat b1("B1", 1);
	Bureaucrat b2("B2", 150);
	Bureaucrat b3(b1);
	std::cout << b3 << std::endl;
	b3 = b2;
	std::cout << b3 << std::endl;
	try {
		Bureaucrat b3("B3", 160);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b4("B4", -2);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	try{
		b1.incrementGrade();
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try{
		b2.decrementGrade();
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	b1.decrementGrade();
	std::cout << b1 << std::endl;
	b2.incrementGrade();
	std::cout << b2 << std::endl;
}
