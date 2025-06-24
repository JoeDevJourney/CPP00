/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:23:10 by jbrandt           #+#    #+#             */
/*   Updated: 2025/06/24 14:48:59 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;

public:
	Contact();
	void setContact(const std::string& first, const std::string& last,
					const std::string& nick, const std::string& phone,
					const std::string& secret);
	std::string getFirst() const;
	std::string getLast() const;
	std::string getNick() const;
	std::string getNumber() const;
	std::string getSecret() const;
	bool isEmpty() const;
};

#endif