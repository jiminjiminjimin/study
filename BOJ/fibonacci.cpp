#include <iostream>
using namespace std;
int count_0;
int count_1;

int fibonacci(int n) { // DP �޸������̼� �Ǻ���ġ �Լ�
	if (n == 0) {
		return 0;
	}
	else if (n == 1||n == -1) {
		return 1;
	}
	else {
		int* fib = new int[n + 1]; // ����Ʈ ���� �Ҵ�
		fib[0] = 0;
		fib[1] = 1;
		for (int i = 2; i <= n; i++) {
			fib[i] = fib[i - 1] + fib[i - 2];
		}
		return fib[n];
	}}

int main() {

	int T; // ���� Ƚ��
	int num; // �Ǻ���ġ�� �ִ� ��
	
	cin >> T; // Ƚ�� �Է� �ޱ�

	for (int i = 0; i < T; i++) { // T�� �ݺ�
		count_0 = 0; // �ʱ�ȭ
		count_1 = 0;
		cin >> num; // �Ǻ���ġ �Լ��� �Է�
		
		cout << fibonacci(num - 1) << " " << fibonacci(num) << endl; // ��Ŀ� �°� ���
	}
}