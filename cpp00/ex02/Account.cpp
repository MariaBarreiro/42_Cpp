#include "Account.hpp"
#include <experimental/filesystem>
#include <iomanip>
#include <iostream>
#include <ctime>


//Static members initialization.

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void){}

/*
	The returned tm structure has the following members:

    tm_sec - The seconds within a minute
    tm_min - The minutes within an hour
    tm_hour - The hour within a day (from 0 to 23)
    tm_mday - The day of the month
    tm_mon - The month (from 0 to 11 starting with January)
    tm_year - The number of years since 1900
    tm_wday - The weekday (from 0 to 6 starting with Sunday)
    tm_yday - The day of the year (from 0 to 365 with 0 being January 1)
    tm_isdst - Positive when daylight saving time is in effect, zero when not in effect and negative when unknown
*/

void	Account::_displayTimestamp(void){
	time_t		now;
	struct tm*	current_time;

	time(&now);
	current_time = localtime(&now);

	std::cout << "[";
	std::cout << current_time->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << current_time->tm_mon + 1;
	std::cout << std::setw(2) << current_time->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << current_time->tm_hour;
	std::cout << std::setw(2) << current_time->tm_min;
	std::cout << std::setw(2) << current_time->tm_sec;
	std::cout << "]";
}

Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0) 
{
	_nbAccounts++;
	_totalAmount += initial_deposit;	

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "closed" << std::endl;	
}

int	Account::getNbAccounts(){
	return (_nbAccounts);
}

int	Account::getTotalAmount(){
	return (_totalAmount);
}

int	Account::getNbDeposits(){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(){
	return (_totalNbWithdrawals);
}

int	Account::checkAmount(void) const{
	return (_amount);
}

void Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";

	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;

	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount" << checkAmount() << ";";
	std::cout << "withdrawal:";

	if (withdrawal > checkAmount()) {
		std::cout << "refused" << std::endl;
		return false;
	}

	std::cout << withdrawal;

	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;

	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}


