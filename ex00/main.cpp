/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:44:46 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/12/05 23:26:17 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	std::cout << "Test 1" << std::endl;
	try {
		Bureaucrat meruem("Meruem", 1);
		std::cout << meruem << std::endl;
		std::cout << "Try meruem upgrading" << std::endl;
		meruem.incrementGrade();
		std::cout << "Success" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Test 2" << std::endl;
	try {
		Bureaucrat ging("GING=FREECSS", 0);
		std::cout << "Success" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Test 3" << std::endl;
	try {
		Bureaucrat leorio("LEORIO", 150);
		std::cout << leorio << std::endl;
		std::cout << "Try leorio decrementing" << std::endl;
		leorio.decrementGrade();
		std::cout << "Success" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Test 4" << std::endl;
	try {
		Bureaucrat Pokkle("POKKLE", 151);
		std::cout << "Success" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Test 5" << std::endl;
	try {
		Bureaucrat gon("GON=FREECSS", 100);
		std::cout << gon << std::endl;
		std::cout << "Try gon decrementing" << std::endl;
		gon.decrementGrade();
		std::cout << "Success" << std::endl;
		std::cout << gon << std::endl;
		std::cout << "Try gon incrementing" << std::endl;
		gon.incrementGrade();
		std::cout << "Success" << std::endl;
		std::cout << gon << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
