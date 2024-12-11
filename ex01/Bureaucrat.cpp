/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:47:48 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/12/11 20:48:15 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

//Constructors and Destructor

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name), _grade(other._grade) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name), _grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

//Operators

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

//Getters

const std::string& Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

//Methods

void Bureaucrat::incrementGrade() {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

//Output

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
	return (os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}

void Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout << *this << " signs " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << *this << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}