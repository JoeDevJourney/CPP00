/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:16:02 by jbrandt           #+#    #+#             */
/*   Updated: 2025/06/27 14:14:51 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : currentIndex(0), contactCount(0) {}

void PhoneBook::addContact(const Contact& contact)
{
	contacts[currentIndex] = contact;
	currentIndex = (currentIndex + 1) % 8;
	if (contactCount < 8)
		contactCount++;
}

std::string	PhoneBook::limitString(const std::string& str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::searchContact() const
{
	std::cout << "|" << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << std::string(44, '-') << std::endl;
	for (int i = 0; i < contactCount; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|"
					<< std::setw(10) << limitString(contacts[i].getFirst()) << "|"
					<< std::setw(10) << limitString(contacts[i].getLast()) << "|"
					<< std::setw(10) << limitString(contacts[i].getNick()) << "|" << std::endl;
	}
}

void PhoneBook::displayContact(int index) const
{
	if (index < 0 || index >= contactCount)
	{
		std::cout << "Invalid Index!" << std::endl;
		return;
	}
	std::cout << "First Name: "<< contacts[index].getFirst() << std::endl;
	std::cout << "Last Name: "<< contacts[index].getLast() << std::endl;
	std::cout << "Nickname: "<< contacts[index].getNick() << std::endl;
	std::cout << "Phone Number: "<< contacts[index].getNumber() << std::endl;
	std::cout << "Darkest Secret: "<< contacts[index].getSecret() << std::endl;
}

int PhoneBook::getContactCount() const
{
	return contactCount;
}