/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:25:08 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/04 18:27:32 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
		Bureaucrat();

	public:
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

		const std::string& getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);