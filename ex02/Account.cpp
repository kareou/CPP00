/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:15:50 by mkhairou          #+#    #+#             */
/*   Updated: 2023/05/31 13:05:29 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

void Account::_displayTimestamp(void)
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year << 1 + ltm->tm_mon;
	std::cout << ltm->tm_mday << "_" << ltm->tm_hour;
	std::cout << ltm->tm_min << ltm->tm_sec << "] ";
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}
int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}
void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << (Account::_amount + deposit);
	Account::_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_amount += deposit;
	Account::_totalNbDeposits += Account::_nbDeposits;
	std::cout << ";nb_deposits:" << Account::_nbDeposits;
	std::cout << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (withdrawal > Account::_amount)
	{
		Account::checkAmount();
		return (0);
	}
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << (Account::_amount - withdrawal);
	Account::_nbWithdrawals++;
	Account::_totalNbWithdrawals += Account::_nbWithdrawals;
	std::cout << ";nb_withdrawals:" << Account::_nbWithdrawals;
	Account::_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout << std::endl;
	return (1);
}
int Account::checkAmount(void) const
{
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	std::cout << ";withdrawal:refused";
	std::cout << std::endl;
	return (0);
}
// status displayer function
void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";deposits:" << Account::_nbDeposits;
	std::cout << ";withdrawals:" << Account::_nbWithdrawals;
	std::cout << std::endl;
}
Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	Account::_accountIndex = Account::getNbAccounts();
	Account::_totalAmount += initial_deposit;
	Account::_amount = initial_deposit;
	Account::_nbAccounts++;
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";amount:" << initial_deposit;
	std::cout << ";created";
	std::cout << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";closed";
	std::cout << std::endl;
}
