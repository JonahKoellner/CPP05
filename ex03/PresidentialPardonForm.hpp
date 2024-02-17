/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:03:08 by jkollner          #+#    #+#             */
/*   Updated: 2024/02/17 12:56:53 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	protected:
		void execute(Bureaucrat const & executor) const;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & copy);

		PresidentialPardonForm & operator=(PresidentialPardonForm const & copy);

		std::string getTarget() const;


		~PresidentialPardonForm();
};
