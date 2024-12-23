#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T; // 테스트 개수 
    double x_1, y_1, r_1, x_2, y_2, r_2; // 두 원의 좌표
    double distance; // 거리

    cin >> T; //개수 입력

    for (int i = 0; i < T; i++) { // T번만큼 반복
        cin >> x_1 >> y_1 >> r_1 >> x_2 >> y_2 >> r_2; // 정보 입력받기
        distance = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2)); // 거리 계산
        if (x_1 == x_2 && y_1 == y_2 && r_1 == r_2) { // 두 원이 동일한 경우
            cout << -1 << endl;
        }
        else if (distance > r_1 + r_2 || distance + min(r_1, r_2) < max(r_1, r_2)) { // 두 원이 서로 닿지 않는 경우
            cout << 0 << endl;
        }
        else if (distance == r_1 + r_2 || distance + min(r_1, r_2) == max(r_1, r_2)) { // 두 원이 접하는 경우
            cout << 1 << endl;
        }
        else { // 그 외 두 점에서 교차하는 경우
            cout << 2 << endl;
        }

    }
}
