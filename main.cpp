
//Вариант 1

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    struct buyers {
        int num[10];
        char fio[30];
        char address[30];
        char date[8];
    }buyers[10000] = {0};

    int amt_buyers = 0, i, j, sbu = 0;

    cout << "Введите количество покупателей: ";
    cin >> amt_buyers;
    cin.ignore();

    for (i = 0; i < amt_buyers; i++) {
        buyers[i].num[i] = i + 1;
        cout << "Введите ФИО " << (i + 1) << " покупателя: ";
        cin.ignore();
        cin.getline(buyers[i].fio, 40);
        cin.ignore();

        cout << "\nВведите адресс " << (i + 1) << " покупателя: ";
        cin.ignore();
        cin.getline(buyers[i].address, 40);
        cin.ignore();
        cout << "\nВведите дату поставки на учет " << (i + 1) << " покупателя: ";
        cin.ignore();
        cin.getline(buyers[i].address, 40);
        cin.ignore();
    }

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
    for (i = 0; i < amt_buyers; i++) {
        if (buyers[i].num > sbu) {
            cout << endl << buyers[i].fio << ", порядковый номер - " << buyers[i].num;
        }
    }
    return 0;
}