// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h" // Account class definition
class CheckingAccount : public Account
{
public:
   // constructor initializes balance and transaction fee
   CheckingAccount( double, double );
   void credit(double);
   bool debit(double);
private:
   double transactionFee; // fee charged per transaction
   // utility function to charge fee
   void chargeFee();
}; // end class CheckingAccount

#endif
