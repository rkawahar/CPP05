/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:42:40 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/12/12 21:04:35 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "--- ShrubberyCreationForm ---" << std::endl;
	ShrubberyCreationForm shrubbery("White house");
	Bureaucrat trump("Donald John Trump", 138);
	trump.signForm(shrubbery);
	trump.executeForm(shrubbery);
	trump.incrementGrade();
	trump.executeForm(shrubbery);
	std::cout << std::endl;

	std::cout << "--- RobotomyRequestForm ---" << std::endl;
	Bureaucrat inventor("invator", 46);
	RobotomyRequestForm robotomy("Edward Scissorhands");
	inventor.signForm(robotomy);
	inventor.executeForm(robotomy);
	inventor.incrementGrade();
	inventor.executeForm(robotomy);
	std::cout << std::endl;

	std::cout << "--- PresidentialPardonForm ---" << std::endl;
	PresidentialPardonForm pardon("Arthur");
	Bureaucrat president("Zaphod Beeblebrox", 5);
	president.signForm(pardon);
	president.executeForm(pardon);
	president.incrementGrade();
	president.executeForm(pardon);
}
