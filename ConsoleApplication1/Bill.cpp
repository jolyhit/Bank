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
	cout << "На счету №" << number << " " << balance << "р." << endl;
}
void Bill::printOwner() {
	cout << "Владелец счета № " << number << " - " << owner << ", ИНН: " << ITN << endl;
}
void Bill::addMoney(double money) {
	balance += money;
	cout << "Теперь баланс на вашем счете составляет: " << balance << "руб.\n";
}