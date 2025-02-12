/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:37:36 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/12 19:34:46 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main(void) {
	Intern PersonA;

	AForm *Form1;
	Form1 = PersonA.makeForm("presidential pardon", "Arthur");

	AForm *Form2;
	Form2 = PersonA.makeForm("robotomy request", "RK");

	AForm *Form3;
	Form3 = PersonA.makeForm("shrubbery creation", "Donald John Trump");

	delete Form1;
	delete Form2;
	delete Form3;
}