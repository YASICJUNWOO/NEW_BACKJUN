#include <iostream>
using namespace std;

int main() {
	int n; //동전 종류
	int price; //목표 금액
	int cnt = 0; //사용 동전 수

	cin >> n >> price;

	int* coin = new int[n]();

	//동전 종류 오름차 순으로 입력 받기
	for (int i = 0;i<n;i++) {
		cin >> coin[i];
	}

	//동전 큰 값부터 탐색
	for(int i=n-1;i>=0;i--){

		//동전 가치가 목표금액보다 작아야하며 목표금액이 남아있을 때
		while(price >= coin[i] && price > 0) {
			price -= coin[i];
			//현재 동전 가치보다 목표금액이 낮아질때마다 계속 뺴준다
			cnt++; //동전이 사용될 때마다 수를 증가시켜준다
		}
	}

	cout << cnt;
}