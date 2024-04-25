#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    return 32.0 + (9.0 / 5.0) * celsius;
}
int main() {
    setlocale(LC_ALL,"");
    float temperatures[6];
    float sum_celsius = 0.0;

    // ��� ���������� �� ����� � ����� �����
    for (int i = 0; i < 6; ++i) {
        cout << "������ ����������� �� " << i * 4 << ":00 ��� (������� ������): ";
        cin >> temperatures[i];
        sum_celsius += temperatures[i];
    }

    // ���������� �������������� ����������� � �������� ������
    float average_celsius = sum_celsius / 6.0;
    cout << "�������������� ����������� (������� ������): " << average_celsius << endl;

    // ����������� �������������� ����������� � ������� ����������
    float average_fahrenheit = celsiusToFahrenheit(average_celsius);
    cout << "�������������� ����������� (������� ����������): " << average_fahrenheit << endl;

    return 0;
}
