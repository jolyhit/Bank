#pragma once
#include <iostream>
using namespace std;
class Client
{
public:
	Client();
	Client(const char*, const char*, const char*, int, const char*, const char*, int, int, const char*, const char*, double);
	void printFullName();
	void balance();
	void replenishBalance(double);
private:
	char* surname;
	char* name;
	char* patronymic;
	int cardNumber;
	char* password;
	char* gender;
	int age;
	char* adress;
	char* dateOfBirth;
	double overallBalance;
	int numberOfBills;
};

