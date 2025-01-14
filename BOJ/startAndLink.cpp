#include <iostream>
#include <vector>
using namespace std;

int n; // 전체 원소의 개수
int r; // 선택할 개수
int* sArr;
int* lArr;
int map[20][20];
int startSum = 0;
int linkSum = 0;
int minVal = 2147483647;

void selectOther() {
    int idx = 0; // lArr의 인덱스
    for (int i = 0; i < n; i++) {
        bool selected = false;
        for (int j = 0; j < r; j++) {
            if (i == sArr[j]) { // 선택된 원소인지 확인
                selected = true;
                break;
            }
        }
        if (!selected) {
            lArr[idx++] = i; // 선택되지 않은 원소를 lArr에 저장
        }
    }
}
void calculateSum() {
    int startSum = 0;
    int linkSum = 0;

    // 선택된 팀의 합산 점수
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            startSum += map[sArr[i]][sArr[j]];
            linkSum += map[lArr[i]][lArr[j]];
        }
    }

    // 최소값 업데이트
    minVal = min(minVal, abs(startSum - linkSum));
}

void combination(int depth, int next) {
    if (depth == r) { // r개의 요소를 모두 선택한 경우
        selectOther();
        calculateSum();
        return;
    }

    for (int i = next; i < n; i++) { // 다음 요소를 선택
        sArr[depth] = i;
        combination(depth + 1, i + 1); // 재귀 호출
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
