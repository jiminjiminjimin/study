#include <iostream>
#include <vector>
using namespace std;

int n; // ��ü ������ ����
int r; // ������ ����
int* sArr;
int* lArr;

void combination(int depth, int next) {
    if (depth == r) { // r���� ��Ҹ� ��� ������ ���
        for (int i = 0; i < r; i++) {
            cout << lArr[sArr[i]] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = next; i < n; i++) { // ���� ��Ҹ� ����
        sArr[depth] = i;
        combination(depth + 1, i + 1); // ��� ȣ��
    }
}

int main() {
    cin >> n;
    r = 6;
    sArr = new int[r];
    lArr = new int[n];

    while (n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> lArr[i];
        }
        combination(0, 0); // depth = 0, next = 0
        cout << endl;
        cin >> n;
    }

    return 0;
}
