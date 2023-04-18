#include <iostream>
using namespace std;

class Account
{
private:
	int id; // ������ �̸�
	double balance; //������ �ܾ�
	double annualInterestRate; //�� �������� ����
public:
	Account();
	int getID();
	double getBalance();
	double getAnnualInterestRate();
	void setID(int newID);
	void setBalance(double newBalance);
	void setAnnualInterestRate(double newAnnualInterestRate);
	double getMonthlyInterestRate(); // ������ ��ȯ�ϴ� �Լ�
	void withDraw(double amount); //���·κ��� ���� �ݾ� �����ϴ� �Լ�
	void deposit(double amount); //���¿� ���� �ݾ��� �Ա��ϴ� �Լ�
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
	return (annualInterestRate / 1200); //�� �����̴ϱ� 12*100
}
void Account::withDraw(double amount) //����
{
	if (balance > amount) // ���� ���� �ܾ��� ���� �ݾ� �� ���� ũ�� 
	{
		balance -= amount; //�ܾ׿��� �ܾ�-����ݾ� ����
	}
}
void Account::deposit(double amount) //�Ա�
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