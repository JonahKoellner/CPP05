/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:56:35 by jkollner          #+#    #+#             */
/*   Updated: 2024/02/17 14:58:24 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main() {
	Intern someRandomIntern;
	AForm* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;

	AForm* shrub = someRandomIntern.makeForm("shrubbery creation", "Bender");
	std::cout << *shrub << std::endl;

	AForm* pres = someRandomIntern.makeForm("presidential pardon", "Bender");
	std::cout << *pres << std::endl;


	delete pres;
	delete shrub;
	delete rrf;
}
