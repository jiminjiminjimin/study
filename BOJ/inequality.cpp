#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
bool visited[10] = {false, false, false, false, false, false, false, false, false, false,};
vector<int> initArray = { 0, 1, 2, 3, 4 ,5, 6, 7, 8, 9 };
vector<int> result;
vector<vector<int>> values;
vector<vector<int>> values2;

int n = 10;
int r;

void Print() {
	values.push_back(result);
}
void permutation(int depth) {
	if (depth == r+1) {
		Print();
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			result.push_back(initArray[i]);
			permutation(depth + 1);
			result.pop_back();
			visited[i] = false;
		}

	}
}
int main() {
	cin >> r;
	vector<char> k;
	for (int i = 0; i < r; i++) {
		char c;
		cin >> c;
		k.push_back(c);
	}
	permutation(0);
	for (int i = 0; i < values.size(); i++) {
		bool flag = true;

		for (int j = 0; j < values[i].size() - 1; j++) {
			if ((k[j] == '<' && values[i][j] > values[i][j + 1] )||( k[j] == '>' && values[i][j] < values[i][j + 1])) {
				flag = false;
			}			
			
		}
		if (flag) {
			values2.push_back(values[i]);
			flag = false;
		}
	}

	for (int nxt : values2.front()) {
		cout << nxt;
	}
	cout << endl;
	for (int nxt : values2.back()) {
		cout << nxt;
	}
	cout << endl;



}
