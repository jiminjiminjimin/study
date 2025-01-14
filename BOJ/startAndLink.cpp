#include <iostream>
#include <vector>
using namespace std;

int n; // ��ü ������ ����
int r; // ������ ����
int* sArr;
int* lArr;
int map[20][20];
int startSum = 0;
int linkSum = 0;
int minVal = 2147483647;

void selectOther() {
    int idx = 0; // lArr�� �ε���
    for (int i = 0; i < n; i++) {
        bool selected = false;
        for (int j = 0; j < r; j++) {
            if (i == sArr[j]) { // ���õ� �������� Ȯ��
                selected = true;
                break;
            }
        }
        if (!selected) {
            lArr[idx++] = i; // ���õ��� ���� ���Ҹ� lArr�� ����
        }
    }
}
void calculateSum() {
    int startSum = 0;
    int linkSum = 0;

    // ���õ� ���� �ջ� ����
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            startSum += map[sArr[i]][sArr[j]];
            linkSum += map[lArr[i]][lArr[j]];
        }
    }

    // �ּҰ� ������Ʈ
    minVal = min(minVal, abs(startSum - linkSum));
}

void combination(int depth, int next) {
    if (depth == r) { // r���� ��Ҹ� ��� ������ ���
        selectOther();
        calculateSum();
        return;
    }

    for (int i = next; i < n; i++) { // ���� ��Ҹ� ����
        sArr[depth] = i;
        combination(depth + 1, i + 1); // ��� ȣ��
    }
}

int main() {
    cin >> n;
    r = n / 2;
    sArr = new int[r];
    lArr = new int[r];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }
    combination(0, 0); // depth = 0, next = 0
    cout << minVal;
    return 0;
}
