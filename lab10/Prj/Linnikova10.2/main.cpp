#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

// Функція для отримання поточної дати та часу
string getCurrentDateTime() {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    char buffer[20];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", ltm);
    return buffer;
}

// Функція для дозапису вхідного файлу
void appendToFile(const string& filename, const string& content) {
    ofstream file(filename, ios_base::app); // Відкриття файлу у режимі дозапису

    if (file.is_open()) {
        file << content << endl; // Додавання вмісту у файл
        file << "Дата та час дозапису: " << getCurrentDateTime() << endl; // Запис поточної дати та часу
        file.close(); // Закриття файлу
        cout << "Інформацію успішно додано у файл " << filename << endl;
    } else {
        cerr << "Помилка: не вдалося відкрити файл " << filename << " для дозапису." << endl;
    }
}

int main() {
    setlocale( LC_ALL, "" );
    string filename = "input.txt";
    string verse = "Хай щастить у Вашій хаті, мамо\nВсім, хто переступить Ваш поріг:\nДобрим людям, і птахам так само,\nІ котові, що в теплі приліг;\nХай щастить кожненькій деревині,\nЩо до хати віти притуля,\nХай щастить малесенькій травині\nІ вітерцю, що приліта здаля.\n";

    appendToFile(filename, verse);

    return 0;
}
