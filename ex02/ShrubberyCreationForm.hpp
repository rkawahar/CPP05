/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:09:53 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/12/12 20:06:37 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>


class ShrubberyCreationForm : public AForm {
	private:
		std::string _target;
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(const std::string& target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		void execute(const Bureaucrat& executor) const;
};
