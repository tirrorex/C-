#include "Account.class.hpp"
#include <iostream>
#include <time.h>

	int Account::_nbAccounts = 0;
	int Account::_totalAmount = 0;
	int Account::_totalNbDeposits = 0;
	int Account::_totalNbWithdrawals = 0;

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
		Account::_displayTimestamp();
		std::cout << " accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << \
			Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
	}

	Account::Account( int initial_deposit )
	{
		_amount = 0;
		_accountIndex = 0;
		_nbWithdrawals = 0;
		_nbDeposits = 0;
		if (initial_deposit > 0)
		{
			this->_amount += initial_deposit;
			Account::_totalAmount += this->_amount;
		}
		_accountIndex = Account::_nbAccounts;
		Account::_nbAccounts += 1;
		Account::_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	}

	Account::~Account( void )
	{
		Account::_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	}

	void	Account::makeDeposit( int deposit )
	{
		if (deposit > 0)
		{
			Account::_totalAmount += deposit;
			this->_nbDeposits += 1;
			Account::_totalNbDeposits += 1;
			Account::_displayTimestamp();
			std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << \
				";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposit:" << _nbDeposits << std::endl;
			_amount += deposit;
		}
	}

	bool	Account::makeWithdrawal( int withdrawal )
	{
		Account::_displayTimestamp();
		if (withdrawal > 0 && (withdrawal < Account::checkAmount()))
		{
			this->_amount -= withdrawal;
			Account::_totalAmount -= withdrawal;
			this->_nbWithdrawals += 1;
			Account::_totalNbWithdrawals += 1;
			std::cout << " index:" << _accountIndex << ";p_amount:" << this->_amount << \
				";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawal:" << this->_nbWithdrawals << std::endl;
			return true;
		}
		else
		{
			std::cout << " index:" << _accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
			return false;
		}
	}

	int		Account::checkAmount( void ) const
	{
		return this->_amount;
	}

	void	Account::displayStatus( void ) const
	{
		Account::_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";amount:" << this->_amount << ";deposits:" << \
			this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	}

	void	Account::_displayTimestamp( void )
	{
		time_t rawtime;
		 struct tm * timeinfo;
		 char buffer [80];

		 time (&rawtime);
		 timeinfo = localtime (&rawtime);
		 strftime (buffer,80,"%G%m%d_%H%M%S",timeinfo);
		 std::cout << "[" << buffer << "]";
	}
	Account::Account( void )
	{

	}