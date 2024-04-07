#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale (LC_ALL,"");
    double x, y, z, S;
    // Введення значень x, y, z
    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення y: ";
    cin >> y;
    cout << "Введіть значення z: ";
    cin >> z;
    // Обчислення виразу S
    S = z + 2 * pow(y, 2) / log(x - y) + sqrt(M_PI * x);
    // Виведення результату
    cout << "Результат обчислення виразу S: " << S << endl;
    return 0;
}
