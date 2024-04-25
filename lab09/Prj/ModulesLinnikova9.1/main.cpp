#include <iostream>
using namespace std;
float calculateBonus(float base_salary, float total_salary, int years_of_service) {
    setlocale(LC_ALL,"");
    float bonus_percentage;
    if (years_of_service >= 3 && years_of_service < 5)
        bonus_percentage = 0.1;
    else if (years_of_service >= 5 && years_of_service < 7)
        bonus_percentage = 0.15;
    else if (years_of_service >= 7 && years_of_service < 15)
        bonus_percentage = 0.20;
    else
        bonus_percentage = 0.25;

    float bonus_amount = base_salary * bonus_percentage;
    float total_payment = total_salary + bonus_amount;
    return total_payment;
}

int main() {
    float base_salary, total_salary;
    int years_of_service;
    setlocale(LC_ALL,"");
    cout << "¬вед≥ть розм≥р посадового окладу (грн.): ";
    cin >> base_salary;
    cout << "¬вед≥ть розм≥р зароб≥тноњ плати прац≥вника (грн.): ";
    cin >> total_salary;
    cout << "¬вед≥ть стаж роботи на п≥дприЇмств≥ (рок≥в): ";
    cin >> years_of_service;

    float total_payment = calculateBonus(base_salary, total_salary, years_of_service);
    cout << "—ума до виплати (грн., включно з надбавкою): " << total_payment << endl;

    return 0;
}
