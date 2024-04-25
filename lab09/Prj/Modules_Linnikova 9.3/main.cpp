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

    cout << "¬вед≥ть натуральне число N (в≥д 0 до 10008000): ";
    cin >> N;

    // ѕерев≥рка б≥ту D11
    bool D11_is_zero = (N & (1 << 11)) == 0;

    int result;
    if (D11_is_zero) {
        // якщо б≥т D11 р≥вний 0, обчислити к≥льк≥сть дв≥йкових нул≥в у числ≥ N
        result = countZerosOrOnes(N, true);
    } else {
        // якщо б≥т D11 не р≥вний 0, обчислити к≥льк≥сть дв≥йкових одиниць у числ≥ N
        result = countZerosOrOnes(N, false);
    }

    cout << "–езультат: " << result << endl;

    return 0;
}
