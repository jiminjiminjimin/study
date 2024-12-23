#include <iostream>
using namespace std;
int count_0;
int count_1;

int fibonacci(int n) { // DP 메모이제이션 피보나치 함수
	if (n == 0) {
		return 0;
	}
	else if (n == 1||n == -1) {
		return 1;
	}
	else {
		int* fib = new int[n + 1]; // 리스트 동적 할당
		fib[0] = 0;
		fib[1] = 1;
		for (int i = 2; i <= n; i++) {
			fib[i] = fib[i - 1] + fib[i - 2];
		}
		return fib[n];
	}}

int main() {

	int T; // 시행 횟수
	int num; // 피보나치에 넣는 값
	
	cin >> T; // 횟수 입력 받기

	for (int i = 0; i < T; i++) { // T번 반복
		count_0 = 0; // 초기화
		count_1 = 0;
		cin >> num; // 피보나치 함수에 입력
		
		cout << fibonacci(num - 1) << " " << fibonacci(num) << endl; // 양식에 맞게 출력
	}
}