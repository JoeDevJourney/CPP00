/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:16:15 by jbrandt           #+#    #+#             */
/*   Updated: 2025/06/24 15:42:07 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook {
private:
	Contact contacts[8];
	int	currentIndex;
	int	contactCount;
	std::string limitString(const std::string& str) const;

public:
	PhoneBook();
	void addContact(const Contact& contact);
	void searchContact() const;
	void displayContact(int index) const;
};

#endif