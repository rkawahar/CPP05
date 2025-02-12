/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:00:14 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/12 18:11:12 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AForm.hpp"

class Intern {
	public :
		Intern(void);
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		~Intern(void);
	
		AForm* makeForm(std::string name, std::string target);
};