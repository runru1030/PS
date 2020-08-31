#include<iostream>
#include<queue>
#include<utility>
#include<cstring>
#include<string>
using namespace std;

typedef pair<int, string> cal;

queue<cal> q;
int visit[10000] = { 0 };

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		memset(visit, 0, sizeof(visit));
		scanf("%d %d", &a, &b);
		q.push({ a, "" });
		visit[a] = 1;

		while (!q.empty()) {
			cal c = q.front();
			q.pop();
			int x = c.first;
			string s = c.second;

			if (x == b) {
				cout << s << "\n";
				while (!q.empty())	q.pop();
				break;
			}
			//D
			int temp, temp2;
			if (x != 0) {
				temp = x * 2;

				if (temp>9999)temp %= 10000;
				if (!visit[temp]) {
					s.push_back('D');
					q.push({ temp, s });
					visit[temp] = 1;
					s.pop_back();
				}
			}
			//S
			if (x != 0)temp = x - 1;
			else if (x == 0)temp = 9999;
			if (!visit[temp]) {
				s.push_back('S');
				q.push({ temp, s });
				visit[temp] = 1;
				s.pop_back();
			}
			//L
			if (x != 0) {
				
				temp = x % 1000;
				temp2 = x / 1000;
				temp =temp*10 + temp2;
				if (!visit[temp]) {
					s.push_back('L');
					q.push({ temp, s });
					visit[temp] = 1;
					s.pop_back();
				}
			}
			//R
			if (x != 0) {

				temp = x % 10;
				temp2 = x / 10;
				temp = temp * 1000 + temp2;
				if (!visit[temp]) {
					s.push_back('R');
					q.push({ temp, s });
					visit[temp] = 1;
					s.pop_back();
				}

			}
		}
	}

	return 0;
}