#include <iostream>
#include <algorithm>
using namespace std;

//배열, 탐색 목표 숫자, 배열 최대인덱스, 배열 최소 인덱스
int BS(long long* arr, long long target, int max, int min) {
	if (min>max) //return으로 넘어왔지만 찾는 원소가 없을 경우
		return 0;

	int mid = (max + min) / 2; //인덱스 중간값
	if (arr[mid] == target)  //목표숫자가 맞으면 1리턴
		return 1;
	else if (arr[mid] < target) //목표숫자가 중간값보다 클때
		return BS(arr, target, max, mid + 1); //중간값 기준 오른쪽 배열 탐색
	else//목표숫자가 중간값보다 작을 때
		return BS(arr, target, mid-1, min); //중간값 기준 왼쪽 배열 탐색


}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;  //저장될 원소의 수
	
	long long input; //value
	long long* arr = new long long[n]; //저장될 원소를 받을 동적배열

	for (int i = 0;i < n;i++) { //원소 저장
		
		cin >> input;
		arr[i] = input;
	}
	
	sort(arr, arr + n); // 배열 오름차순 정리

	int n2;
	cin >> n2; //탐색할 원소의 수

	while (n2--) { //이진탐색 수행
		cin >> input;
		cout<<BS(arr,input,n-1,0)<<'\n';
	}
}

