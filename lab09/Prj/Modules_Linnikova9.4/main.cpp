#include <iostream>
#include <conio.h> // Для отримання символів без очікування натискання клавіші
#include <Windows.h> // Для використання функції Beep()

using namespace std;

// Функція для обчислення s
void s_calculation() {
    // Реалізація функції s_calculation
    cout << "Функція s_calculation" << endl;
}

// Функція для задачі 9.1
void task_9_1() {
    // Реалізація функції task_9_1
    cout << "Функція task_9_1" << endl;
}

// Функція для задачі 9.2
void task_9_2() {
    // Реалізація функції task_9_2
    cout << "Функція task_9_2" << endl;
}

// Функція для задачі 9.3
void task_9_3() {
    // Реалізація функції task_9_3
    cout << "Функція task_9_3" << endl;
}

int main() {
    setlocale(LC_ALL,"");
    char input;
    bool exit = false;

    do {
        // Очікуємо введення користувача
        cout << "Введіть символ (z, r, s, t, q): ";
        input = _getch();

        // Обробка введеного символу
        switch (input) {
            case 'z':
                s_calculation();
                break;
            case 'r':
                task_9_1();
                break;
            case 's':
                task_9_2();
                break;
            case 't':
                task_9_3();
                break;
            case 'q':
            case 'Q':
                exit = true;
                break;
            default:
                // Ігноруємо інші символи та видаємо звуковий сигнал про помилку
                Beep(1000, 500); // Генеруємо звуковий сигнал
                cout << "Неправильний символ. Спробуйте ще раз." << endl;
                break;
        }
    } while (!exit);

    cout << "Програма завершила роботу." << endl;

    return 0;
}
