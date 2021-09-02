/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 08:52:24 by xli               #+#    #+#             */
/*   Updated: 2021/09/02 14:09:46 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += this->_amount;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
			<< "amount:" << this->_amount << ";"
			<< "created" << std::endl;
}

Account::~Account()
{
	this->_nbAccounts--;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
			<< "amount:" << this->_amount << ";"
			<< "closed" << std::endl;
}

void	Account::_displayTimestamp(void) //[19920104_091532]
{
	std::time_t	t = time(0); //date & time base on the system
	std::tm		*now = localtime(&t);

	std::cout << "[" << (now->tm_year + 1900);
	if ((now->tm_mon + 1) < 10)
		std::cout << "0";
	std::cout << (now->tm_mon + 1);
	if (now->tm_mday < 10)
		std::cout << "0";
	std::cout << now->tm_mday << "_";
	if (now->tm_hour < 10)
		std::cout << "0";
	std::cout << now->tm_hour;
	if (now->tm_min < 10)
		std::cout << "0";
	std::cout << now->tm_min;
	if (now->tm_sec < 10)
		std::cout << "0";
	std::cout << now->tm_sec << "]";
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";"
			<< "total:" << _totalAmount << ";"
			<< "deposits:" << _totalNbDeposits << ";"
			<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
			<< "p_amount:" << this->_amount << ";"
			<< "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposit:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
			<< "p_amount:" << this->_amount << ";"
			<< "withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	Account::_totalAmount -=withdrawal;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
			<< "amount:" << this->_amount << ";"
			<< "deposits:" << this->_nbDeposits << ";"
			<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}
