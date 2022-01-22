#define _CRT_SECURE_NO_WARNINGS
#include "Client.h"

Client::Client() {
	this->surname = new char[] {"Client surname"};
	this->name = new char[] {"Client name"};
	this->patronymic = new char[] {"Client patronymic"};
	this->password = new char[] {"Client password"};
	this->gender = new char[] {"Client gender"};
	this->adress = new char[] {"Client adress"};
	this->dateOfBirth = new char[] {"Client DateOfBirth"};
	this->cardNumber = 0;
	this->age = 0;
	this->numberOfBills = 0;
	this->overallBalance = 0.0;
}
Client::Client(const char* surname, const char* name, const char* patr, int cardNumber, const char* password, const char* gender, int age, int nob, const char* adr, const char* dob, double balance) {
	size_t len = strlen(surname);
	this->surname = new char[len + 1];
	strcpy(this->surname, surname);

	size_t len1 = strlen(name);
	this->name = new char[len1 + 1];
	strcpy(this->name, name);

	size_t len2 = strlen(patr);
	this->patronymic = new char[len2 + 1];
	strcpy(this->patronymic, patr);

	this->cardNumber = cardNumber;

	size_t len3 = strlen(password);
	this->password = new char[len3 + 1];
	strcpy(this->password, password);

	size_t len4 = strlen(gender);
	this->gender = new char[len4 + 1];
	strcpy(this->gender, gender);

	this->age = age;

	this->numberOfBills = nob;

	size_t len5 = strlen(adr);
	this->adress = new char[len5 + 1];
	strcpy(this->adress, adr); 

	size_t len6 = strlen(dob);
	this->dateOfBirth = new char[len6 + 1];
	strcpy(this->dateOfBirth, dob);
	
	overallBalance = balance;
}
void Client::printFullName() {
	cout << "Полное имя: " << surname << " " << name << " " << patronymic << endl;
}
void Client::balance() {
	cout << "У клиента " << surname << " " << name << " баланс = " << overallBalance << "руб.\n";
}
void Client::replenishBalance(double money) {
	overallBalance += money;
	cout << "Баланс на карте клиента " << surname << " " << name << " = " << overallBalance << "руб.\n";
}