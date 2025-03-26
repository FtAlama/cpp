/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:39:16 by alama             #+#    #+#             */
/*   Updated: 2025/03/11 21:13:22 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";created" << std::endl;
}

int	Account::getNbAccounts(void) { return (Account::_nbAccounts); }

int	Account::getTotalAmount(void) { return (Account::_totalAmount); }

int	Account::getNbDeposits(void) { return (Account::_totalNbDeposits); }

int	Account::getNbWithdrawals(void) { return (Account::_totalNbWithdrawals); }

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
	struct tm* now = std::localtime(&t);
	std::stringstream ss;
	
	ss << std::setfill('0')
	<< (now->tm_year + 1900)
	<< std::setw(2) << (now->tm_mon + 1)
	<< std::setw(2) << now->tm_mday
	<< "_"
	<< std::setw(2) << now->tm_hour
	<< std::setw(2) << now->tm_min
	<< std::setw(2) << now->tm_sec;
	std::cout << "[" << ss.str() << "]" << " ";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
	<< ";total:" << Account::getTotalAmount() << ";deposits:"
	<< Account::getNbDeposits() << ";withdrawals:"
	<< Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";deposits:"
	<< this->_nbDeposits << ";withdrawals:"
	<< this->_nbWithdrawals <<std::endl;
	
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
	<< this->_amount << ";deposit:" << deposit
	<< ";amount:";
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << this->_amount << ";nb_deposits:"
	<< this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
	<< this->_amount << ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";amount:";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << this->_amount << ";nb_withdrawals:"
	<< this->_nbWithdrawals << std::endl;
	return (true);
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";closed" << std::endl;
}
