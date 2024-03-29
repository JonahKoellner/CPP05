/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:03:29 by jkollner          #+#    #+#             */
/*   Updated: 2024/02/17 12:57:09 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm{
	private:
		std::string target;
	protected:
		void execute(Bureaucrat const & executor) const;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & copy);

		RobotomyRequestForm & operator=(RobotomyRequestForm const & copy);

		std::string getTarget() const;


		~RobotomyRequestForm();
};
