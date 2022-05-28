/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <mskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:49:06 by mskeleto          #+#    #+#             */
/*   Updated: 2021/11/02 22:36:48 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()
{
    std::time_t date;
    std::tm* now;

    date = std::time(NULL);
    now = std::localtime(&date);
    std::cout << "[" << now->tm_year + 1900
            << std::setw(2) << std::setfill('0') << now->tm_mon + 1
            << std::setw(2) << std::setfill('0') << now->tm_mday << '_'
            << std::setw(2) << std::setfill('0') << now->tm_hour
            << std::setw(2) << std::setfill('0') << now->tm_min
            << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}

Account::Account()
{
    this->_accountIndex = Account::_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
            << ";created" << std::endl;
}

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
    Account::_totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
            << ";created" << std::endl;
}

int	Account::getNbAccounts( void ){
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ){
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void ){
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount
            << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:"
            << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    Account::_displayTimestamp();
    std::cout<< "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    this->_amount += deposit;
    std::cout << ";deposit:" << deposit << ";amount:" << this->_amount
            << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:"
            << this->_amount << ";withdrawals:";
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    std::cout << "withdrawal;" << ";amount:" << this->_amount
            << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}
int		Account::checkAmount( void ) const {
    return this->_amount;
}

void	Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	        << ";deposits:" << this->_nbDeposits << ";withdrawals:"
            << this->_nbWithdrawals << std::endl;
}

Account::~Account()
{
    Account::_nbAccounts--;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
            << ";closed" << std::endl;
}