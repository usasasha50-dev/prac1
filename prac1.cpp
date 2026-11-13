#include <iostream>

using namespace std;

void changePrice(double* price) {
    *price = *price + 100;
}

int main() {
 
    int orderNumber = 412;
    
    cout << "Номер замовлення: " << orderNumber << endl;
    
    cout << "Адреса orderNumber: " << &orderNumber << endl;

    int* ptr = &orderNumber;
    
    cout << "Адреса через вказівник (ptr): " << ptr << endl;
    
    cout << "Значення через вказівник (*ptr): " << *ptr << endl;

    *ptr = 413;
    cout << "Повторно виведене (змінене) значення orderNumber: " << orderNumber << endl;
    cout << "----------------------------------------\n";


    int quantity = 2;
    
    int* quantityPtr = &quantity;

    cout << "Кількість товарів: " << quantity << endl;
    cout << "Адреса quantity: " << &quantity << endl;
    cout << "Адреса через quantityPtr: " << quantityPtr << endl;
    cout << "Кількість через вказівник (*quantityPtr): " << *quantityPtr << endl;

    *quantityPtr = 4;
    cout << "Нова кількість товарів після зміни через вказівник: " << quantity << endl;
    cout << "----------------------------------------\n";


    double price = 2400.0;

    cout << "Початкова вартість: " << price << " грн" << endl;

    changePrice(&price);

    cout << "Нова вартість: " << price << " грн" << endl;

    return 0;
}