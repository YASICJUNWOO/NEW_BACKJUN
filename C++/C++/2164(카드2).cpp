#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	queue<int> q;

	for (int i = 1;i <= N;i++) //1부터 N까지 큐에 저장
		q.push(i);

	while (q.size() != 1) { //1개 남을때까지 
		//처음 삭제하고 / 뒤로 하나 보내기
		q.pop();
		q.push(q.front());
		q.pop();
	}

	//마지막 한 개 출력
	cout << q.front();
}