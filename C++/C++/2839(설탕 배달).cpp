#include <iostream>
using namespace std;

int main() {

	int kg; //배달해야하는 설탕 무게
	cin >> kg;

	int cnt = 0; //봉지의 수
	
	while (kg >= 0) { // kg가 양수일때
		if (kg % 5 == 0) {  //큰수인 5로 나눠진다면 몫을 더해주고 탈출
			cnt += kg / 5;
			kg = 0;
			break;
		}
		kg -= 3; //5로 안나눠진다면 작은 수인 3을 빼주고 반복
		cnt ++;
	}

	if (kg) {
		cout << -1;
	}
	else {
		cout << cnt;
	}
	
}