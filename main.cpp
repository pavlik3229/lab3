
//Вариант 1
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

struct Buyers {
    int num[10];
    char fio[30];
    char address[30];
    char date[8];
};

void Input(Buyers& buyer) {
    cout << "Введите номер (10 цифр): ";
    for (int i = 0; i < 10; ++i) {
        cin >> buyer.num[i];
    }

    cout << "Введите ФИО: ";
    cin.ignore();
    getline(cin, buyer.fio);

    cout << "Введите адрес: ";
    getline(cin, buyer.address);

    cout << "Введите дату (формат DDMMYYYY): ";
    cin >> buyer.date;
}

int main()
{
    setlocale(LC_ALL, "Russian");


    Buyers buyers[10000] = {0};

    int amt_buyers = 0, i, j;

    cout << "Введите количество покупателей: ";
    cin >> amt_buyers;


    struct buyers stemp;
    for (i = 0; i < (amt_buyers - 1); i++) {
        for (j = 0; j < (amt_buyers - i - 1); j++) {
            if (buyers[j].num < buyers[j + 1].num) {
                stemp = buyers[j];
                buyers[j] = buyers[j + 1];
                buyers[j + 1] = stemp;
            }

        }
    }
    
    
    return 0;
}

void Output(int buyers) {
    for (int i = 0; i < ; ++i) {
        
    }
}