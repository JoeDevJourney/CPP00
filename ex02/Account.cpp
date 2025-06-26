/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:25:17 by jbrandt           #+#    #+#             */
/*   Updated: 2025/06/26 19:34:12 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0; 

Account::Account(int intial_deposit)
	: _accountIndex(_nbAccounts),
	_amount(intial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += intial_deposit;
}

void Account::_displayTimestamp()
{
	std::time_t now = std::time(nullptr);
	std::tm*	ltm = std::localtime(&now);
	std::cout << '['
		<< 1900 + ltm->tm_year
		<< std::setw(2) << std::setfill('0') << ltm->tm_mon + 1
		<< std::setw(2) << std::setfill('0') << ltm->tm_mday << '_'
		<< std::setw(2) << std::setfill('0') << ltm->tm_hour
		<< std::setw(2) << std::setfill('0') << ltm->tm_min
		<< std::setw(2) << std::setfill('0') << ltm->tm_sec
		<< "]";
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
		<< ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals
		<< std::endl;
}
