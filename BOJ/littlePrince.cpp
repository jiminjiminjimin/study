#include <iostream>
#include <cmath>
using namespace std;

double getDistance(int ax, int ay, int bx, int by) { // �Ÿ� ��� �Լ�
    return sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
}

bool checkInCircle(int cx, int cy, int cr, int x, int y) { // xy ��ǥ�� �� �ȿ� �ִ��� Ȯ���ϴ� �Լ�
    if (getDistance(cx, cy, x, y) < cr) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int T; // �׽�Ʈ ���� 
    int Count; // ���� Ƚ��
    double x_1, y_1, x_2, y_2; // �� ���� ��ǥ
    double distance; // �Ÿ�
    
    cin >> T; //���� �Է�

    for (int i = 0; i < T; i++) { // T����ŭ �ݺ�
        Count = 0;
        cin >> x_1 >> y_1 >> x_2 >> y_2; // ���� �Է¹ޱ�
        int n;
        cin >> n; // �� ���� �Է¹ޱ�
        for (int j = 0; j < n; j++) {
            int c_x, c_y, c_r;
            cin >> c_x >> c_y >> c_r; // �� ���� �Է¹ޱ�
            if (checkInCircle(c_x, c_y, c_r, x_1, y_1) xor checkInCircle(c_x, c_y, c_r, x_2, y_2)) {
                Count++;
            }
        }
        cout << Count << endl; // ��� ���

    }
}
