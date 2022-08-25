#include <iostream>
#include<string>
using namespace std;

int main() {

	string word; //입력받을 단어
	int len;

	cin>>word;

	len = word.length(); //단어의 길이

	char reverse[100]={0, }; //뒤집은 단어 받을 문자 배열

	//word 배열 끝번부터 뒤집어 reverse에 저장
	for (int i = 0;i < len;i++) {
		reverse[i] = word[len - 1 - i];
	}

	//뒤집은 문자열 string 형으로 변환
	string reverseWord(reverse);

	//같으면 1 다르면0
	if (reverseWord == word)cout << '1';
	else cout << '0';
	
}