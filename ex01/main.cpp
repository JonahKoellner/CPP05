/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:56:35 by jkollner          #+#    #+#             */
/*   Updated: 2023/11/08 12:36:04 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main() {
	Bureaucrat b1("B1", 1);
	Bureaucrat b2("B2", 150);
	Bureaucrat b3("B3", 75);
	Form f1("F1", 5, 1);
	Form f2("F2", 100, 100);
	b1.signForm(f1);
	b2.signForm(f2);
	b3.signForm(f2);
}
