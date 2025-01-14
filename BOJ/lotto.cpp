#include <iostream>
#include <vector>
using namespace std;

int n; // 전체 원소의 개수
int r; // 선택할 개수
int* sArr;
int* lArr;

void combination(int depth, int next) {
    if (depth == r) { // r개의 요소를 모두 선택한 경우
        for (int i = 0; i < r; i++) {
            cout << lArr[sArr[i]] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = next; i < n; i++) { // 다음 요소를 선택
        sArr[depth] = i;
        combination(depth + 1, i + 1); // 재귀 호출
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
