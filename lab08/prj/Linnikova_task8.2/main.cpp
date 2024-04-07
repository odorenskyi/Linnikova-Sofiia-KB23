#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale.h> // Включаємо заголовний файл для роботи з мовою
// Функція для виведення прізвища та імені розробника зі знаком охорони авторського права
void printDeveloperName() {
    std::cout << "© Ліннікова Софія" << std::endl;
}

// Функція для обчислення значення S
double s_calculation(double x, double y, double z) {
    return x + y + z; // Наприклад, просте додавання
}

int main() {
    double x, y, z;
    int a, b;
setlocale(LC_ALL, "");
    // Отримання введених значень від користувача
    std::cout << "Введіть значення x: ";
    std::cin >> x;
    std::cout << "Введіть значення y: ";
    std::cin >> y;
    std::cout << "Введіть значення z: ";
    std::cin >> z;
    std::cout << "Введіть значення a: ";
    std::cin >> a;
    std::cout << "Введіть значення b: ";
    std::cin >> b;

    // Виведення результатів
    std::cout << "8.2.1. ";
    printDeveloperName();
    std::cout << "8.2.2. Результат виразу a+10>=b: " << (a + 10 >= b ? 1 : 0) << std::endl;
    std::cout << "8.2.3. Значення х, y, z у десятковій системі числення: " << x << ", " << y << ", " << z << std::endl;
    std::cout << "      Значення х, y, z у шістнадцятковій системі числення: " << std::hex << std::showbase << std::setw(8) << std::setfill('0') << static_cast<int>(x) << ", " << static_cast<int>(y) << ", " << static_cast<int>(z) << std::endl;
    std::cout << "      Значення S: " << s_calculation(x, y, z) << std::endl;

    return 0;
}
