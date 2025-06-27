/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:16:15 by jbrandt           #+#    #+#             */
/*   Updated: 2025/06/27 14:01:15 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <string>

class PhoneBook {
private:
	Contact contacts[8];	//fixed array
	int	currentIndex;		//Index where to store the next Contact
	int	contactCount;		//total number of stored Contacts
	std::string limitString(const std::string& str) const;	//is used to cut longer names

public:
	PhoneBook();
	void addContact(const Contact& contact);
	void searchContact() const;
	void displayContact(int index) const;
	int getContactCount() const;
};

#endif