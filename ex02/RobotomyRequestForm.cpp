/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:09:45 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/12/12 20:02:39 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other) {
		this->_target = other._target;
	}
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if (this->getSigned() == false) {
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw AForm::GradeTooLowException();
	}
	std::cout << "Drrrrrrrrrrrrrrrr..." << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0) {
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	}
	else {
		std::cout << this->_target << " has failed to be robotomized." << std::endl;
	}
}
