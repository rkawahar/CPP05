/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:06:49 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/12 17:57:48 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class AForm {
	private:
		AForm();
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		//Constructors and Destructor
		AForm(const std::string& name, int gradeToSign, int gradeToExecute);
		virtual ~AForm();
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
	
		//Getters
		const std::string& getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		//Setters
		void setSigned(bool isSigned);

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

		class FormNotSignedException : public std::exception {
			public:
				const char* what() const throw();
		};

		//Operators

		//Methods
		void beSigned(const Bureaucrat& bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);