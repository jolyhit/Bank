#include <iostream>
#include "Client.h"
#include "Bill.h"
using namespace std;

int main()
{    
    setlocale(LC_ALL, "ru");
    Client Ivan("Петров", "Иван", "Владимирович", 2340124576540912, "qwerty123", "муж", 34, 1, "г. Москва, ул. Отдыха 18, кв. 12", "21.34.1987", 87943.12);
    Ivan.printFullName();
    Ivan.balance();
    Ivan.replenishBalance(5000);
    cout << "\n\n";
    Bill First(43789, 125608.09, 23709, "Богданов", 239374543);
    First.printBalance();
    First.printOwner();
    First.addMoney(12000);
}
