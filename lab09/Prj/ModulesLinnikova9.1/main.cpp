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
    cout << "������ ����� ���������� ������ (���.): ";
    cin >> base_salary;
    cout << "������ ����� �������� ����� ���������� (���.): ";
    cin >> total_salary;
    cout << "������ ���� ������ �� ��������� (����): ";
    cin >> years_of_service;

    float total_payment = calculateBonus(base_salary, total_salary, years_of_service);
    cout << "���� �� ������� (���., ������� � ���������): " << total_payment << endl;

    return 0;
}
