/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:09:50 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/12/12 20:51:36 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other) {
		this->_target = other._target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::ofstream ofs(this->_target + "_shrubbery");
	ofs << "                       __                       " << std::endl;
	ofs << "                 _____|  |_____                 " << std::endl;
	ofs << "                |___        ___|                " << std::endl;
	ofs << "                   /        \\                   " << std::endl;
	ofs << "                  /  /|  |\\  \\                  " << std::endl;
	ofs << "                 /  / |  | \\  \\                 " << std::endl;
	ofs << "                /__/  |__|  \\__\\                " << std::endl;
	ofs << "               __              __               " << std::endl;
	ofs << "         _____|  |_____  _____|  |_____         " << std::endl;
	ofs << "        |___        ___||___        ___|        " << std::endl;
	ofs << "           /        \\      /        \\           " << std::endl;
	ofs << "          /  /|  |\\  \\    /  /|  |\\  \\          " << std::endl;
	ofs << "         /  / |  | \\  \\  /  / |  | \\  \\         " << std::endl;
	ofs << "        /__/  |__|  \\__\\/__/  |__|  \\__\\        " << std::endl;
	ofs << "       __              __              __       " << std::endl;
	ofs << " _____|  |_____  _____|  |_____  _____|  |_____ " << std::endl;
	ofs << "|___        ___||___        ___||___        ___|" << std::endl;
	ofs << "   /        \\      /        \\      /        \\   " << std::endl;
	ofs << "  /  /|  |\\  \\    /  /|  |\\  \\    /  /|  |\\  \\  " << std::endl;
	ofs << " /  / |  | \\  \\  /  / |  | \\  \\  /  / |  | \\  \\   " << std::endl;
	ofs << "/__/  |__|  \\__\\/__/  |__|  \\__\\/__/  |__|  \\__\\" << std::endl;
	ofs << "                       __                       " << std::endl;
	ofs << "                 _____|  |_____                 " << std::endl;
	ofs << "                |___        ___|                " << std::endl;
	ofs << "                   /        \\                   " << std::endl;
	ofs << "                  /  /|  |\\  \\                  " << std::endl;
	ofs << "                 /  / |  | \\  \\                 " << std::endl;
	ofs << "                /__/  |__|  \\__\\                " << std::endl;
	ofs.close();
}
