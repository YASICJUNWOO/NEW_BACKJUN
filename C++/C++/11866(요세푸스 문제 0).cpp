#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N,K;
	cin >> N >> K;
	
	int check_num=1; //횟수 기록할 변수 생성

	queue<int> q; //큐 생성

	for (int i = 1;i <= N;i++) //1부터 N까지 큐에 저장
		q.push(i);

	cout << '<';
	while (q.size() != 1) {  //1개 남아있을 때 까지 반복

		//K번째가 되었을때 숫자 출력하고 삭제
		//check_num 초기화
		if (check_num == K) { 
			cout << q.front() << ", ";
			q.pop();
			check_num = 1;
		}

		//아니라면 뒤로 보내고 삭제하기
		//check_num 증가시키기
		else {
			q.push(q.front());
			q.pop();
			check_num++;
		}
	}

	//마지막 수 출력
	cout << q.front()<<'>';
}