/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:33:28 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/12/10 19:18:44 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form {
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		//Constructors and Destructor
		Form(const std::string& name, int gradeToSign, int gradeToExecute);
		~Form();
		Form(const Form& other);
		Form& operator=(const Form& other);
	
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

		//Operators
		friend std::ostream& operator<<(std::ostream& os, const Form& form);

		//Methods
		void beSigned(const Bureaucrat& bureaucrat);
};
