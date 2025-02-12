/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:00:11 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/12 18:36:47 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {};

Intern::Intern(const Intern &other){
	*this = other;
};

Intern& Intern::operator=(const Intern &other){
	(void)other;
	return *this;
};

Intern::~Intern(void) {};

AForm* Intern::makeForm(std::string name, std::string target) {
	if (name == "presidential pardon") {
		std::cout << "Intern creates " << name << std::endl;
		return (new PresidentialPardonForm(target));
	} else if (name == "robotomy request") {
		std::cout << "Intern creates " << name << std::endl;
		return (new RobotomyRequestForm(target));
	} else if (name == "shrubbery creation") {
		std::cout << "Intern creates " << name << std::endl;
		return (new ShrubberyCreationForm(target));
	} else {
		std::cout << "Intern couldn't create " << name << " Form" << std::endl;
		return NULL;
	}
};