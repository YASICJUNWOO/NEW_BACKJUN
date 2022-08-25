#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    int gop;
    int cnt[10] = { 0, };   //0~9까지 빈도 카운팅을 위한 배열
    cin >> a >> b >> c;
    gop = a * b * c;

    string s = to_string(gop);  //자료형 변환

    for (int i = 0;i < s.length();i++) {   //s의 자릿수 구하는 s.length()
        cnt[s[i] - '0']++;           //s[i]는 문자가 나오기 떄문에 아스키 코드로 나온다
    }
    for (int i = 0;i < 10;i++) {
        cout << cnt[i] << endl;
    }
    return 0;
}