/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:33:05 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/12 17:44:39 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Constructors and Destructor

Form::Form(): _name(""), _signed(false), _gradeToSign(0), _gradeToExecute(0) {}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form& other): _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

Form& Form::operator=(const Form& other) {
	if (this != &other)
		this->_signed = other._signed;
	return (*this);
}

//Getters

const std::string& Form::getName() const {
	return (this->_name);
}

bool Form::getSigned() const {
	return (this->_signed);
}

int Form::getGradeToSign() const {
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

//Setters

void Form::setSigned(bool isSigned) {
	this->_signed = isSigned;
}

//Operators

std::ostream& operator<<(std::ostream& os, const Form& form) {
	return (os << form.getName() << " is " << (form.getSigned() ? "signed" : "not signed") << ", requires grade " << form.getGradeToSign() << " to sign, and grade " << form.getGradeToExecute() << " to execute.");
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

//Exceptions

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}
