# Bank Account Class

This folder contains my code for a homework assignment for COP3337 Object Oriented Programming.

## Assignment

Design a class named Account that contains:

1) A private int data field named id for the account.
2) A private double data field named balance for the account.
3) A private double data field named annual_interest_rate that stores the current annual interest rate.
4) The accessor (get) functions for id, and balance.
5) The mutator (set) functions for id, balance and annual_interest_rate. Id, balance and annual interest rate can be initialized only with positive values, otherwise, they should be set to 0.
6) A user-defined constructor that creates an account object with given three data fields. Hint: use appropriate mutator functions.
7) A function named getMonthlyInterest() that returns the monthly interest (amount earned monthly based on the account balance and annual interest rate).
8) A function named withdraw(amount) that withdraws a specified amount from the account. → void withdraw (double amount). The function cannot withdraw more than current balance.
9) A function named deposit(amount) that deposits a specified amount to the account. → void deposit (double amount). The function cannot deposit negative amount.

In the main function create an Account object with an account ID of -1, a balance of $20000, and an annual interest rate of 4.5%. Use the withdraw function to withdraw $25000, use the deposit function to deposit $3000, and print ID, balance and monthly
interest.

Here is a sample run:

```bash
Insufficient funds: Current balance is: $20000
ID is: 0
Balance is: 23000
Monthly interest is: $86.25
```
