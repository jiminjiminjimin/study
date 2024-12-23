#include <iostream>
#include <cmath>
using namespace std; 

int main() {
    int T; // 테스트 개수
    double x_1, y_1, r_1, x_2, y_2, r_2;
    double distance;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> x_1>> y_1>> r_1>> x_2>> y_2>> r_2;
        distance = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
        if (x_1== x_2&& y_1 == y_2 && r_1 == r_2){
            cout<<-1<<endl;
        }
        else if (distance > r_1 + r_2||distance+min(r_1, r_2) < max(r_1, r_2)){
            cout<< 0<<endl;
        }
        else if(distance == r_1+r_2||distance+min(r_1, r_2) == max(r_1, r_2)){
            cout << 1<<endl;
        }
        else{
            cout<<2<<endl;
        }
        
    }
}