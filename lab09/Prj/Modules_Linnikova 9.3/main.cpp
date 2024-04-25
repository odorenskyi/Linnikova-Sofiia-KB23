#include <iostream>
using namespace std;

int countZerosOrOnes(int n, bool countZeros) {
    int count = 0;
    while (n) {
        count += (n & 1) == countZeros;
        n >>= 1;
    }
    return count;
}

int main() {
    setlocale(LC_ALL,"");
    int N;

    cout << "������ ���������� ����� N (�� 0 �� 10008000): ";
    cin >> N;

    // �������� ��� D11
    bool D11_is_zero = (N & (1 << 11)) == 0;

    int result;
    if (D11_is_zero) {
        // ���� �� D11 ����� 0, ��������� ������� �������� ���� � ���� N
        result = countZerosOrOnes(N, true);
    } else {
        // ���� �� D11 �� ����� 0, ��������� ������� �������� ������� � ���� N
        result = countZerosOrOnes(N, false);
    }

    cout << "���������: " << result << endl;

    return 0;
}
