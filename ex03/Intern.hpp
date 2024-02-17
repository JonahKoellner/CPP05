/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:47:42 by jonahkollne       #+#    #+#             */
/*   Updated: 2024/02/17 14:55:52 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AForm.hpp"
#include <unordered_map>
#include <functional>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Intern {
	private:
		typedef AForm* (*FormCreator)(std::string);
   		std::unordered_map<std::string, FormCreator> _knownForms;
		static AForm* _createShrubberyCreationForm(std::string target);
		static AForm* _createRobotomyRequestForm(std::string target);
		static AForm* _createPresidentialPardonForm(std::string target);
	public:
		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		AForm* makeForm(std::string formName, std::string target);
		~Intern();
};
