//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int T; // 시행 횟수
//	int K; // 규칙 개수
//	int N; // 건물 개수
//	queue<int> q;
//	vector<int> edges[1001];
//	int dpTime[1001];
//	int cTime[1001];
//	int indegree[1001];
//
//	cin >> T;
//	while (T > 0) {
//		T--;
//		cin >> N >> K;
//		for (int i = 1; i <= N; i++) {
//			cin >> cTime[i];
//			indegree[i] = 0;
//		}
//		for (int i = 0; i < K; i++) {
//			int from, to;
//			cin >> from >> to;
//			edges[from].push_back(to);
//			indegree[to]++;
//		}
//		for (int i = 1; i <= N; i++) {
//			if (indegree[i] == 0) {
//				q.push(i);
//				dpTime[i] = cTime[i];
//			}
//		}
//		while (!q.empty()) {
//			int current = q.front();
//			q.pop();
//			
//			for (int i = 0; i < edges[current].size(); i++) {
//				dpTime[edges[current].at(i)] = max(dpTime[edges[current].at(i)],dpTime[current]+cTime[edges[current].at(i)]);
//				indegree[edges[current].at(i)]--;
//
//				if (indegree[edges[current].at(i)] == 0) {
//					q.push(edges[current].at(i));
//				}
//			}
//		}
//		int W;
//		cin >> W;
//		cout << dpTime[W] << endl;
//		for (int i = 1; i <= N; i++) {
//			edges[i].clear();
//			indegree[i] = 0;
//			dpTime[i] = 0;
//			cTime[i] = 0;
//		}
//	}
//	
//
//
//}