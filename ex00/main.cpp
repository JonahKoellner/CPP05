/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:56:35 by jkollner          #+#    #+#             */
/*   Updated: 2023/11/08 10:03:51 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main() {
	Bureaucrat b1("B1", 1);
	Bureaucrat b2("B2", 150);
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
