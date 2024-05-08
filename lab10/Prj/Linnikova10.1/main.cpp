#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// ���������� ��� ���������� ������
struct DeveloperInfo {
    string name;
    string organization;
    string city;
    string country;
    string year;
};

// ������� ��� ��������� ������� ���� � ����
int countLetters(const string& word) {
    return word.length();
}

// ������� ��� ��������, �� � ����� � ����
bool wordInPoem(const string& word, const string& poem) {
    return poem.find(word) != string::npos;
}

// ������� ��� ������� �������� ����� �� ������ ���������� � �������� ����
void processInput(const string& inputFilename, const string& outputFilename, const DeveloperInfo& info) {
    ifstream inputFile(inputFilename);
    ofstream outputFile(outputFilename);

    // ����� ��������� ����������
    outputFile << "��'� �� ������� ���������� ������: " << info.name << endl;
    outputFile << "��������/����������: " << info.organization << endl;
    outputFile << "̳���: " << info.city << endl;
    outputFile << "�����: " << info.country << endl;
    outputFile << "г� ��������: " << info.year << endl;

    string word;
    string punctuationMarks = ".,;:!?'\"";
    string poem = "��� ������� � ����� ���, ����, ���, ��� ����������� ��� ����: ������ �����, � ������ ��� ����, � �����, �� � ���� �����; ��� ������� ��������� �������, �� �� ���� ��� �������, ��� ������� ���������� ������ � ������, �� ������ �����.";

    while (inputFile >> word) {
        if (isalpha(word[0])) {
            int lettersCount = countLetters(word);
            outputFile << "ʳ������ ���� � ���� '" << word << "': " << lettersCount << endl;
            if (wordInPoem(word, poem)) {
                outputFile << "����� � �������� ����� � � ����" << endl;
            } else {
                outputFile << "����� � �������� ����� ������ � ����" << endl;
            }
        } else if (punctuationMarks.find(word) != string::npos) {
            outputFile << "��� �������!" << endl;
        } else {
            outputFile << "��'� �� ������� ������� ���������� ������: ��� ������" << endl;
        }
    }

    inputFile.close();
    outputFile.close();
}

int main() {
    setlocale( LC_ALL, "" );
    // ���������� ���������� ��� ����������
    DeveloperInfo developer = {"����� ˳������", "����", "�������������", "������", "2024"};

    // ������� �������� ����� �� ����� ���������� � �������� ����
    processInput("input.txt", "output.txt", developer);

    return 0;
}
