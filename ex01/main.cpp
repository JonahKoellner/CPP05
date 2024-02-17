/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:56:35 by jkollner          #+#    #+#             */
/*   Updated: 2024/02/17 11:56:42 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main() {
	Bureaucrat b1("B1", 1);
	Bureaucrat b2("B2", 150);
	Bureaucrat b3("B3", 75);
	Form f1("F1", 5, 1);
	Form f2("F2", 100, 100);
	Form f3(f2);
	std::cout << f3 << std::endl;
	std::cout << f1 << std::endl;
	b1.signForm(f1);
	f3 = f1;
	std::cout << f3 << std::endl;
	b2.signForm(f2);
	b3.signForm(f2);
}
