#include <iostream>
#include <conio.h> // ��� ��������� ������� ��� ���������� ���������� ������
#include <Windows.h> // ��� ������������ ������� Beep()

using namespace std;

// ������� ��� ���������� s
void s_calculation() {
    // ��������� ������� s_calculation
    cout << "������� s_calculation" << endl;
}

// ������� ��� ������ 9.1
void task_9_1() {
    // ��������� ������� task_9_1
    cout << "������� task_9_1" << endl;
}

// ������� ��� ������ 9.2
void task_9_2() {
    // ��������� ������� task_9_2
    cout << "������� task_9_2" << endl;
}

// ������� ��� ������ 9.3
void task_9_3() {
    // ��������� ������� task_9_3
    cout << "������� task_9_3" << endl;
}

int main() {
    setlocale(LC_ALL,"");
    char input;
    bool exit = false;

    do {
        // ������� �������� �����������
        cout << "������ ������ (z, r, s, t, q): ";
        input = _getch();

        // ������� ��������� �������
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
                // �������� ���� ������� �� ������ �������� ������ ��� �������
                Beep(1000, 500); // �������� �������� ������
                cout << "������������ ������. ��������� �� ���." << endl;
                break;
        }
    } while (!exit);

    cout << "�������� ��������� ������." << endl;

    return 0;
}
