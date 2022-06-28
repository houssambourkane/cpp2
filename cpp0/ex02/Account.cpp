/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:36:19 by hbourkan          #+#    #+#             */
/*   Updated: 2022/06/28 18:05:17 by hbourkan         ###   ########.fr       */
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
    Account::_nbAccounts += 1;
    Account::_totalAmount += _amount;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount <<  ";created" << std::endl;
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount <<  ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";" << "total:" << Account::getTotalAmount() << ";" << "deposits:" << Account::getNbDeposits() << ";" << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_nbDeposits++;
    Account::_totalNbDeposits += 1;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->_amount << ";" << "deposit:" << deposit << ";" << "amount:" << this->_amount + deposit << ";" << "nb_deposits:" << this->_nbDeposits << std::endl;
    this->_amount += deposit;
}
void	Account::makeWithdrawal( int withdrawal )
{
    if (!checkAmount(withdrawal))
    {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->_amount << ";" << "withdrawal:refused" << std::endl;
    }
    else
    {
        this->_nbWithdrawals++;
        Account::_totalNbWithdrawals += 1;
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->_amount << ";" << "withdrawal:" << withdrawal << ";" << "amount:" << this->_amount - withdrawal << ";" << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        this->_amount -= withdrawal;
    }
}

int		Account::checkAmount( int amount ) const
{
    if (this->_amount < amount)
        return 0;
    return 1;
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "deposits:" << this->_nbDeposits << ";" << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
     time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "[%Y%m%d_%X] ", &tstruct);
    std::cout << buf;
}
