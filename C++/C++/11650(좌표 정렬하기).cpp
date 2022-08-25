#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int x, y;
	cin >> n;

	//벡터 짝 point 선언
	vector<pair<int, int>> point;

	//x좌표와 y좌표값 받아 벡터짝에 저장
	for (int i = 0;i<n;i++) {
		cin >> x >> y;
		point.push_back({ x,y });
	}

	//사전 순으로 배열
	sort(point.begin(), point.end());

	//순서대로 벡터 짝의 첫번째 요소와 두번째 요소 출력
	for (int i = 0;i < n;i++) {
		cout << point[i].first <<" " << point[i].second << '\n';
	}
}