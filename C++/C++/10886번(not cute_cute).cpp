#include <iostream>
using namespace std;

int main() {

	int n;//설문 조사를 한 사람의 수

	int cute = 0, not_cute = 0;

	cin >> n;

	for (int i = 0;i < n;i++) {
		int vote=0;//투표값
		cin >> vote;

		//투표값에 따라 득표수 증가
		if (vote == 1) cute++;
		else not_cute++;
	}

	if (cute > not_cute) cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";
}