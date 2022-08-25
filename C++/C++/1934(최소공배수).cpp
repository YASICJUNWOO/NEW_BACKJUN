#include <iostream>
using namespace std;

int checkmin(int a, int b);
int checkmax(int m, int n, int t);

int main() {

	int T;
	//최대 공약수, 최소 공배수 저장할 변수 선언
	int min, max;

	//테스트 케이스 입력받음
	cin >> T;

	int* A = new int[T];
	int* B = new int[T];

	for (int i = 0;i < T;i++) {
		cin >> A[i] >> B[i];
	}

	//조건에 맞게 함수 실행
	for (int i = 0;i < T;i++) {

		//A가 B보다 클 때
		if (A[i] >= B[i])
			min =checkmin(A[i], B[i]);
			
		//B가 A보다 클 때
		else if (A[i] < B[i]) {
			min = checkmin(B[i], A[i]);
		}


		max = checkmax(A[i] / min, B[i] / min, min);
		cout << max<<endl;
	}

}

	//재귀 함수 사용하여 최대공약수 도출
int checkmin(int a, int b) {
	int rest;
	if (!b) return a;
	else return checkmin(b, a % b);
}

//최대공약수와 A,B 두 수의 서로소 사용하여 최소 공배수 도출
int checkmax(int m, int n, int t) {
	return m * n * t;
}