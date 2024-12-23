#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T; // �׽�Ʈ ���� 
    double x_1, y_1, r_1, x_2, y_2, r_2; // �� ���� ��ǥ
    double distance; // �Ÿ�

    cin >> T; //���� �Է�

    for (int i = 0; i < T; i++) { // T����ŭ �ݺ�
        cin >> x_1 >> y_1 >> r_1 >> x_2 >> y_2 >> r_2; // ���� �Է¹ޱ�
        distance = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2)); // �Ÿ� ���
        if (x_1 == x_2 && y_1 == y_2 && r_1 == r_2) { // �� ���� ������ ���
            cout << -1 << endl;
        }
        else if (distance > r_1 + r_2 || distance + min(r_1, r_2) < max(r_1, r_2)) { // �� ���� ���� ���� �ʴ� ���
            cout << 0 << endl;
        }
        else if (distance == r_1 + r_2 || distance + min(r_1, r_2) == max(r_1, r_2)) { // �� ���� ���ϴ� ���
            cout << 1 << endl;
        }
        else { // �� �� �� ������ �����ϴ� ���
            cout << 2 << endl;
        }

    }
}
