/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:23:55 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/12/11 20:53:23 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	std::cout << "test 1" << std::endl;
	try {
		Bureaucrat a("a", 10);
		Form f1("form1", 9, 9);
		std::cout << a << std::endl;
		std::cout << f1 << std::endl;
		a.signForm(f1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "test 2" << std::endl;
	try {
		Bureaucrat b("b", 1);
		Form f2("form2", 9, 9);
		std::cout << b << std::endl;
		std::cout << f2 << std::endl;
		b.signForm(f2);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "test 3" << std::endl;
	try {
		Bureaucrat c("c", 1);
		Form f3("form3", 0, 10);
		std::cout << c << std::endl;
		std::cout << f3 << std::endl;
		c.signForm(f3);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "test 4" << std::endl;
	try {
		Bureaucrat d("d", 1);
		Form f4("form4", 151, 1);
		std::cout << d << std::endl;
		std::cout << f4 << std::endl;
		d.signForm(f4);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "test 5" << std::endl;
	try {
		Bureaucrat e("e", 10);
		Form f5("form5", 9, 1);
		std::cout << e << std::endl;
		std::cout << f5 << std::endl;
		e.signForm(f5);
		e.incrementGrade();
		std::cout << e << std::endl;
		e.signForm(f5);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}