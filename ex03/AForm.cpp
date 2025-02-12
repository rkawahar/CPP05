/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:57:20 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/12 17:57:37 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//Constructors and Destructor

AForm::AForm(): _name(""), _signed(false), _gradeToSign(0), _gradeToExecute(0) {}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(const AForm& other): _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other)
		this->_signed = other._signed;
	return (*this);
}

//Getters

const std::string& AForm::getName() const {
	return (this->_name);
}

bool AForm::getSigned() const {
	return (this->_signed);
}

int AForm::getGradeToSign() const {
	return (this->_gradeToSign);
}

int AForm::getGradeToExecute() const {
	return (this->_gradeToExecute);
}


//Setters

void AForm::setSigned(bool isSigned) {
	this->_signed = isSigned;
}

//Operators

std::ostream& operator<<(std::ostream& os, const AForm& form) {
	return (os << form.getName() << " is " << (form.getSigned() ? "signed" : "not signed") << ", requires grade " << form.getGradeToSign() << " to sign, and grade " << form.getGradeToExecute() << " to execute.");
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

//Exceptions

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

const char* AForm::FormNotSignedException::what() const throw() {
	return ("Form is not signed");
}

