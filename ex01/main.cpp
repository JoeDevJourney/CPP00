/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:39:21 by jbrandt           #+#    #+#             */
/*   Updated: 2025/07/01 13:19:35 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

bool isAlpha(const std::string& str)
{
	for (char c : str)
	{
		if (!isalpha(c))
			return (false);
	}
	return (true);
}

bool isDigit(const std::string& str)
{
	for (char c : str)
	{
		if (!isdigit(c))
			return (false);
	}
	return (true);
}

std::string getInput(const std::string& prompt, bool onlyAlpha = false, bool onlyDigits = false)
{
	std::string input;
	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
		{
			std::cout << "\nEOF! It will exit now!" << std::endl;
			exit(0);
		}
		if (input.empty())
			std::cout << "THIS FIELD SHALL NOT BE EMPTY!" << std::endl;
		else if (onlyAlpha && !isAlpha(input))
			std::cout << "ONLY LETTERS ALLOWED!" << std::endl;
		else if (onlyDigits && !isDigit(input))
			std::cout << "ONlY NUMBERS ALLOWED!" << std::endl;
		else
			break;
	}
	return (input);
}

int main()
{
	PhoneBook PhoneBook;
	std::string command;

	while (true)
	{
		std::cout << "Enter a Command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
		{
			std::cout << "\nEOF. It will exit now!" << std::endl;
			break;
		}
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			Contact newContact;
			newContact.setContact(
				getInput("Enter first name: ", true),
				getInput("Enter last name: ", true),
				getInput("Enter nickname: "),
				getInput("Enter phone number: ", false, true),
				getInput("Enter darkest secret: ")
			);
			PhoneBook.addContact(newContact);
			std::cout << "Contact added! A new Friend!" << std::endl;
		}
		else if (command == "SEARCH")
		{
			if (PhoneBook.getContactCount() == 0)
			{
				std::cout << "You have no Contacts!" << std::endl;
				continue;
			}
			PhoneBook.searchContact();
			std::cout << "\n Please enter an index to display (or type EXIT): ";
			std::string indexStr;
			std::getline(std::cin, indexStr);
			if (indexStr == "EXIT")
			{
				std::cout << "Returning to Main Menu." << std::endl;
				continue;
			}
			try
			{
				int	index = std::stoi(indexStr);
				PhoneBook.displayContact(index);
			}
			catch (...)
			{
				std::cout << "Wrong Input! Try something else!" << std::endl;
			}
		}
		else
		{
			std::cout << "Can't you read? Please enter ADD, SEARCH or EXIT!" << std::endl;
		}
	}
	return (0);
}
