/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:23:02 by jbrandt           #+#    #+#             */
/*   Updated: 2025/06/24 15:00:49 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

void Contact::setContact(const std::string& first, const std::string& last,
						const std::string& nick, const std::string& phone,
						const std::string& secret)
{
	FirstName = first;
	LastName = last;
	Nickname = nick;
	PhoneNumber = phone;
	DarkestSecret = secret;
}

std::string getFirst() const { return FirstName; }
std::string getLast() const { return LastName; }
std::string getNick() const { return NickName; }
std::string getNumber() const { return PhoneNumber; }
std::string getSecret() const { return DarkestSecret; }
bool isEmpty() const { return FirstName.empty(); }
