#include <iostream>
#include <stack>  // ���������� ���������� ��� 
// ������������� �����
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    stack <int> steck;  // ������� ����

    int i = 0;

    cout << "������� ����� ����� ����� �����: " << endl; // ���������� ������������ 
                                                        // ������ 6 �����
    while (i != 6) {
        int a;
        cin >> a;

        steck.push(a);  // ��������� ��������� �����
        i++;
    }

    if (steck.empty()) cout << "���� �� ����";  // ��������� ���� �� ���� (���)

    cout << "������� ������� �����: " << steck.top() << endl; // ������� ������� �������
    cout << "������� ������ ������� ������� " << endl;

    steck.pop();  // ������� ������� �������

    cout << "� ��� ����� ������� �������: " << steck.top(); // ������� ��� �����
                                                            // ������� ������� 
    system("pause");
    return 0;
}