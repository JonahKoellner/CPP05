/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:56:35 by jkollner          #+#    #+#             */
/*   Updated: 2023/11/10 11:52:12 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main() {
	Bureaucrat b1("B1", 1);
	Bureaucrat b2("B2", 150);
	Bureaucrat b3("B3", 75);
	AForm f1("F1", 5, 1);
	AForm f2("F2", 100, 100);
	b1.signForm(f1);
	b2.signForm(f2);
	b3.signForm(f2);
}
