#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	//10개의 칸에서 탑승/하차하는 사람들 입력
	int people[20];

	//단계별로 기차에 있는 사람의 수
	int train[11]={0, }, y = 1;

	for (int i = 0;i < 19;i++) {
		cin >> people[i];
	}

	//이전 기차에서 하차하는 사람과 승차하는 사람 연산하여 저장
	for (int i = 0;i<=18;i += 2) {
		train[y] = train[y-1] - people[i] + people[i + 1];
		y++;
	}

	//sort함수로 정렬
	sort(train, train + 11);

	cout << train[10];
}