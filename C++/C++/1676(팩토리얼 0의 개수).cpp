#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n; //정수 입력받기
	int cnt=0;
	
	//n이 0일 떄는 1
	if (n == 0) {
		cnt = 0;
	}
	else {
	//5의 배수가 있을 때마다 더 작은 짝수 하나를 곱하면 10의 배수 생성
	
		for (int i = 1;i <= n;i++) {
			int num = i;

			if (num % 5 == 0) {
				// 5의 제곱이라면 5로나눠주고 계속 5로 나눠주며 cnt 증가
				do{
					cnt++;
					num /= 5;
				} while (num % 5 == 0);
			}
		}
	}
	
	cout << cnt++;

}