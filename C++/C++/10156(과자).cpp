#include <iostream>
using namespace std;

int main() {

	//과자 1개 가격, 과자 개수, 보유 금액
	int k, n, m;

	//과자 총 금액
	int sum;

	cin >> k >> n >> m;
	
	//총 금액 sum에 저장
	sum = k * n;

	//총 금액이 보유 금액보다 크면 차를 출력
	if (m < sum) {
		cout << sum - m;
	}
	else cout << "0";

}