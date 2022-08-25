#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	//n에 따른 방법의 수 저장할 배열
	int way[1002]{0, };

	//n이 1일 때는 1가지, 2일때는 2가지 방법 존재
	way[1] = 1;
	way[2] = 2;

	//n까지 공식에 맞추어 배열 채워준다
	for (int i = 3; i <= n; i++)
		way[i] = (way[i - 1] + way[i - 2]) % 10007;

	cout << way[n];
}

