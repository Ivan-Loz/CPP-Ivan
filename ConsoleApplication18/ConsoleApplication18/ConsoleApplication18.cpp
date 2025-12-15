#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
	int balance;
	static int accountNumber;
	static int interestRate;
public:
	BankAccount() {this->balance = 0;}
	BankAccount(int balance,int accountNumber,int interestRate) {
		this->balance = balance;
		this->accountNumber = accountNumber;
		this->interestRate = interestRate;
		
	}
	int getbalance() {
		return balance;
	}
	int getaccountNumber() {
		return accountNumber;
	}
	int getinterestRate() {
		return interestRate;
	}
	void deposit(int balance) {
		this->balance += balance;
	}
	int withdraw(int balance) {		
		return this->balance -= balance;
		
	}
	int calculateInterest(int balance) {
		return (balance * this->interestRate * 365 / 365) / 100;
		
	}
};
int BankAccount::accountNumber = 0;
int BankAccount::interestRate = 0;
int main()
{
	setlocale(LC_ALL, "RU");
	BankAccount Karta1(300,1,10);
	Karta1.deposit(1000);
	cout << "Номер карты ";
	cout << Karta1.getaccountNumber() << endl;
	cout << endl;
	cout << "Баланс карты ";
	cout << Karta1.getbalance() << endl;
	cout << endl;
	cout << "Проценты ";
	cout << Karta1.getinterestRate() << endl;
	cout << endl;
	cout << "Суммы с % карты "<< Karta1.getaccountNumber();
	cout << Karta1.calculateInterest(300) << endl;
	cout << endl;

	BankAccount Karta2(2000, 2, 3);
	Karta2.withdraw(500);
	cout << "Номер карты ";
	cout << Karta2.getaccountNumber() << endl; cout << endl;
	cout << "Баланс карты ";
	cout << Karta2.getbalance() << endl;
	cout << "Проценты ";
	cout << Karta2.getinterestRate() << endl;
	cout << endl;
	cout << "Сумма с % карты " <<Karta2.getaccountNumber();
	cout << Karta2.calculateInterest(2000) << endl;
}
