#include <iostream>
#include <cmath>
using namespace std;

double getDistance(int ax, int ay, int bx, int by) { // 거리 계산 함수
    return sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
}

bool checkInCircle(int cx, int cy, int cr, int x, int y) { // xy 좌표가 원 안에 있는지 확인하는 함수
    if (getDistance(cx, cy, x, y) < cr) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int T; // 테스트 개수 
    int Count; // 진입 횟수
    double x_1, y_1, x_2, y_2; // 두 원의 좌표
    double distance; // 거리
    
    cin >> T; //개수 입력

    for (int i = 0; i < T; i++) { // T번만큼 반복
        Count = 0;
        cin >> x_1 >> y_1 >> x_2 >> y_2; // 정보 입력받기
        int n;
        cin >> n; // 원 개수 입력받기
        for (int j = 0; j < n; j++) {
            int c_x, c_y, c_r;
            cin >> c_x >> c_y >> c_r; // 원 정보 입력받기
            if (checkInCircle(c_x, c_y, c_r, x_1, y_1) xor checkInCircle(c_x, c_y, c_r, x_2, y_2)) {
                Count++;
            }
        }
        cout << Count << endl; // 결과 출력

    }
}
