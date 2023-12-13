/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:33:29 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/12/13 15:14:49 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & copy);

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & copy);

		std::string getTarget() const;

		//void execute(Bureaucrat const & executor) const;

		~ShrubberyCreationForm();
};
