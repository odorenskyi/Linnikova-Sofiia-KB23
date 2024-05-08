#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Інформація про розробника модуля
struct DeveloperInfo {
    string name;
    string organization;
    string city;
    string country;
    string year;
};

// Функція для підрахунку кількості літер у слові
int countLetters(const string& word) {
    return word.length();
}

// Функція для перевірки, чи є слово у вірші
bool wordInPoem(const string& word, const string& poem) {
    return poem.find(word) != string::npos;
}

// Функція для обробки вхідного файлу та запису результатів у вихідний файл
void processInput(const string& inputFilename, const string& outputFilename, const DeveloperInfo& info) {
    ifstream inputFile(inputFilename);
    ofstream outputFile(outputFilename);

    // Запис авторської інформації
    outputFile << "Ім'я та прізвище розробника модуля: " << info.name << endl;
    outputFile << "Установа/організація: " << info.organization << endl;
    outputFile << "Місто: " << info.city << endl;
    outputFile << "Країна: " << info.country << endl;
    outputFile << "Рік розробки: " << info.year << endl;

    string word;
    string punctuationMarks = ".,;:!?'\"";
    string poem = "Хай щастить у Вашій хаті, мамо, Всім, хто переступить Ваш поріг: Добрим людям, і птахам так само, І котові, що в теплі приліг; Хай щастить кожненькій деревині, Що до хати віти притуля, Хай щастить малесенькій травині І вітерцю, що приліта здаля.";

    while (inputFile >> word) {
        if (isalpha(word[0])) {
            int lettersCount = countLetters(word);
            outputFile << "Кількість літер у слові '" << word << "': " << lettersCount << endl;
            if (wordInPoem(word, poem)) {
                outputFile << "Слово з вхідного файлу є у вірші" << endl;
            } else {
                outputFile << "Слово з вхідного файлу відсутнє у вірші" << endl;
            }
        } else if (punctuationMarks.find(word) != string::npos) {
            outputFile << "Хай щастить!" << endl;
        } else {
            outputFile << "Ім'я та прізвище першого космонавта України: Юрій Гагарін" << endl;
        }
    }

    inputFile.close();
    outputFile.close();
}

int main() {
    setlocale( LC_ALL, "" );
    // Заповнення інформації про розробника
    DeveloperInfo developer = {"Софія Ліннікова", "ЦНТУ", "Кропивницький", "Україна", "2024"};

    // Обробка вхідного файлу та запис результатів у вихідний файл
    processInput("input.txt", "output.txt", developer);

    return 0;
}
