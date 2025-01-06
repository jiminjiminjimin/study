#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T;
vector<int> num;
vector<int> op;
int maxVal = INT_MIN;
int minVal = INT_MAX;
int calculate() {
	int result = num[0];
	for (int i = 0; i < op.size(); i++) {
		if (op[i] == 0) result += num[i + 1];
		else if (op[i] == 1) result -= num[i + 1];
		else if (op[i] == 2) result *= num[i + 1];
		else if (op[i] == 3) {
			if (num[i + 1] == 0) continue; // 분모가 0인 경우 건너뜀
			result /= num[i + 1];
		}
	}
	return result;
}

int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		int a;
		cin >> a;
		num.push_back(a);
	}
	for (int i = 0; i < 4; i++) {
		int a;
		cin >> a;
		for (int j = 0; j < a; j++) {
			op.push_back(i);
		}
	}
	do {
		int cal = calculate();
		maxVal = max(maxVal, cal);
		minVal = min(minVal, cal);
	} while (next_permutation(op.begin(), op.end()));
	cout << maxVal << endl << minVal;
	
	

}