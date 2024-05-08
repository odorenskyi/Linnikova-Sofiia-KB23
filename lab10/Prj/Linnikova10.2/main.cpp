#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

// ������� ��� ��������� ������� ���� �� ����
string getCurrentDateTime() {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    char buffer[20];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", ltm);
    return buffer;
}

// ������� ��� �������� �������� �����
void appendToFile(const string& filename, const string& content) {
    ofstream file(filename, ios_base::app); // ³������� ����� � ����� ��������

    if (file.is_open()) {
        file << content << endl; // ��������� ����� � ����
        file << "���� �� ��� ��������: " << getCurrentDateTime() << endl; // ����� ������� ���� �� ����
        file.close(); // �������� �����
        cout << "���������� ������ ������ � ���� " << filename << endl;
    } else {
        cerr << "�������: �� ������� ������� ���� " << filename << " ��� ��������." << endl;
    }
}

int main() {
    setlocale( LC_ALL, "" );
    string filename = "input.txt";
    string verse = "��� ������� � ����� ���, ����\n���, ��� ����������� ��� ����:\n������ �����, � ������ ��� ����,\n� �����, �� � ���� �����;\n��� ������� ��������� �������,\n�� �� ���� ��� �������,\n��� ������� ���������� ������\n� ������, �� ������ �����.\n";

    appendToFile(filename, verse);

    return 0;
}
