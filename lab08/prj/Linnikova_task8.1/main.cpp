#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale (LC_ALL,"");
    double x, y, z, S;
    // �������� ������� x, y, z
    cout << "������ �������� x: ";
    cin >> x;
    cout << "������ �������� y: ";
    cin >> y;
    cout << "������ �������� z: ";
    cin >> z;
    // ���������� ������ S
    S = z + 2 * pow(y, 2) / log(x - y) + sqrt(M_PI * x);
    // ��������� ����������
    cout << "��������� ���������� ������ S: " << S << endl;
    return 0;
}
