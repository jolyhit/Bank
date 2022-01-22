#pragma once
#include <iostream>
using namespace std;
class Bill
{
public:
	Bill();
	Bill(int, double, int, const char*, int);
	void printBalance();
	void printOwner();
	void addMoney(double money);
private:
	int number;
	double balance;
	int BIC;
	char* owner;
	int ITN;
};

