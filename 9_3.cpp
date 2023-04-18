#include <iostream>
using namespace std;

class Account
{
private:
	int id; // 계좌의 이름
	double balance; //계좌의 잔액
	double annualInterestRate; //현 이자율을 저장
public:
	Account();
	int getID();
	double getBalance();
	double getAnnualInterestRate();
	void setID(int newID);
	void setBalance(double newBalance);
	void setAnnualInterestRate(double newAnnualInterestRate);
	double getMonthlyInterestRate(); // 월이율 반환하는 함수
	void withDraw(double amount); //계좌로부터 지정 금액 인출하는 함수
	void deposit(double amount); //계좌에 지정 금액을 입금하는 함수
};
Account::Account()
{
	int id = 0;
	double balance = 0.0;
	double annualInterestRate = 0.0;
}
int Account::getID()
{
	return id;
}
double Account::getBalance()
{
	return balance;
}
double Account::getAnnualInterestRate()
{
	return annualInterestRate;
}
void Account::setID(int newID)
{
	id = newID;
}
void Account::setBalance(double newBalance)
{
	balance = newBalance;
}
void Account::setAnnualInterestRate(double newAnnualInterestRate)
{
	annualInterestRate = newAnnualInterestRate;
}
double Account::getMonthlyInterestRate()
{
	return (annualInterestRate / 1200); //월 이율이니까 12*100
}
void Account::withDraw(double amount) //인출
{
	if (balance > amount) // 만약 계좌 잔액이 지정 금액 양 보다 크면 
	{
		balance -= amount; //잔액에는 잔액-인출금액 대입
	}
}
void Account::deposit(double amount) //입금
{
	if (balance > amount)
	{
		balance += amount;
	}
}
int main()
{
	Account a;
	a.setID(1122);
	a.setBalance(20000);
	a.setAnnualInterestRate(4.5);
	a.withDraw(2500);
	a.deposit(300);
	cout << "Balance: " << a.getBalance() << endl;
	cout << "Monthly Interest Rest: " << a.getMonthlyInterestRate() << endl;

	return 0;
	
}