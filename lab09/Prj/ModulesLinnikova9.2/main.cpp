#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    return 32.0 + (9.0 / 5.0) * celsius;
}
int main() {
    setlocale(LC_ALL,"");
    float temperatures[6];
    float sum_celsius = 0.0;

    // Ввід температур за кожну з шести годин
    for (int i = 0; i < 6; ++i) {
        cout << "Введіть температуру за " << i * 4 << ":00 год (градуси Цельсія): ";
        cin >> temperatures[i];
        sum_celsius += temperatures[i];
    }

    // Розрахунок середньодобової температури в градусах Цельсія
    float average_celsius = sum_celsius / 6.0;
    cout << "Середньодобова температура (градуси Цельсія): " << average_celsius << endl;

    // Переведення середньодобової температури в градуси Фаренгейта
    float average_fahrenheit = celsiusToFahrenheit(average_celsius);
    cout << "Середньодобова температура (градуси Фаренгейта): " << average_fahrenheit << endl;

    return 0;
}
