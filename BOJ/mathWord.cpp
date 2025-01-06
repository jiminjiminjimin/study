#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int maxSum = 0;
int sum = 0;
vector<string> words;
vector<int> num(10, 0);
vector<char> alphabet;
vector<int> init = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

bool duplication(char c) {
	for (char p : alphabet) {
		if (c == p) {
			return true;
		}
	}
	return false;

	
}

int matchNum(char c) {
	for (int i = 0; i < alphabet.size(); i++) {
		if (c == alphabet[i]) {
			return init[i];
		}
		
	}
}

int main(){
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;
		words.push_back(s);
	}
	for (int i = 0; i < 10; i++) {
		int k = 9 - i;
		for (int j = 0; j < words.size(); j++) {
			if (words[j].size() - 1 >= k && !duplication(words[j][words[j].size() - k - 1])) {
				alphabet.push_back(words[j][words[j].size() - k-1]);
			}
		}
	}
	for (int i = 0; i < words.size(); i++) {
		for (int j = 0; j < words[i].size(); j++) {
			sum += pow(10, j) * matchNum(words[i][words[i].size() - j - 1]);
		}
	}
	
	cout << sum;	
}