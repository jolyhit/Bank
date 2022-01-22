#define _CRT_SECURE_NO_WARNINGS
#include "Bill.h"
Bill::Bill() {
	this->number = 0;
	this->balance = 0.0;
	this->BIC = 0;
	this->owner = new char[] {"Client password"};
	this->ITN = 0;
}
Bill::Bill(int number, double balance, int BIC, const char* owner, int ITN) {
	this->number = number;
	this->balance = balance;
	this->BIC = BIC;
	size_t len = strlen(owner);
	this->owner = new char[len + 1];
	strcpy(this->owner, owner);
	this->ITN = ITN;
}
void Bill::printBalance() {
	cout << "�� ����� �" << number << " " << balance << "�." << endl;
}
void Bill::printOwner() {
	cout << "�������� ����� � " << number << " - " << owner << ", ���: " << ITN << endl;
}
void Bill::addMoney(double money) {
	balance += money;
	cout << "������ ������ �� ����� ����� ����������: " << balance << "���.\n";
}