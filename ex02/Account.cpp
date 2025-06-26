/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:25:17 by jbrandt           #+#    #+#             */
/*   Updated: 2025/06/26 14:54:44 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

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
