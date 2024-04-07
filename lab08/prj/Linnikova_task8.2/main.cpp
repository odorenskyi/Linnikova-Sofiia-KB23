#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale.h> // �������� ���������� ���� ��� ������ � �����
// ������� ��� ��������� ������� �� ���� ���������� � ������ ������� ����������� �����
void printDeveloperName() {
    std::cout << "� ˳������ �����" << std::endl;
}

// ������� ��� ���������� �������� S
double s_calculation(double x, double y, double z) {
    return x + y + z; // ���������, ������ ���������
}

int main() {
    double x, y, z;
    int a, b;
setlocale(LC_ALL, "");
    // ��������� �������� ������� �� �����������
    std::cout << "������ �������� x: ";
    std::cin >> x;
    std::cout << "������ �������� y: ";
    std::cin >> y;
    std::cout << "������ �������� z: ";
    std::cin >> z;
    std::cout << "������ �������� a: ";
    std::cin >> a;
    std::cout << "������ �������� b: ";
    std::cin >> b;

    // ��������� ����������
    std::cout << "8.2.1. ";
    printDeveloperName();
    std::cout << "8.2.2. ��������� ������ a+10>=b: " << (a + 10 >= b ? 1 : 0) << std::endl;
    std::cout << "8.2.3. �������� �, y, z � ��������� ������ ��������: " << x << ", " << y << ", " << z << std::endl;
    std::cout << "      �������� �, y, z � �������������� ������ ��������: " << std::hex << std::showbase << std::setw(8) << std::setfill('0') << static_cast<int>(x) << ", " << static_cast<int>(y) << ", " << static_cast<int>(z) << std::endl;
    std::cout << "      �������� S: " << s_calculation(x, y, z) << std::endl;

    return 0;
}
