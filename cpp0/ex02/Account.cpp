/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:36:19 by hbourkan          #+#    #+#             */
/*   Updated: 2022/07/02 20:30:03 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    this->_accountIndex = _nbAccounts;
    _nbAccounts += 1;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount <<  ";created" << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount <<  ";closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
    return _totalAmount;
}

int	Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";" << "total:" << Account::getTotalAmount() << ";" << "deposits:" << Account::getNbDeposits() << ";" << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ) {
    this->_nbDeposits++;
    _totalNbDeposits += 1;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->_amount << ";" << "deposit:" << deposit << ";" << "amount:" << this->_amount + deposit << ";" << "nb_deposits:" << this->_nbDeposits << std::endl;
    this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    if (this->_amount < withdrawal)
    {
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->_amount << ";" << "withdrawal:refused" << std::endl;
        return false;
    }
    else
    {
        this->_nbWithdrawals++;
        _totalNbWithdrawals += 1;
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->_amount << ";" << "withdrawal:" << withdrawal << ";" << "amount:" << this->_amount - withdrawal << ";" << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        this->_amount -= withdrawal;
        return true;
    }
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "deposits:" << this->_nbDeposits << ";" << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", &tstruct);
    std::cout << buf;
}
