#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    int gop;
    int cnt[10] = { 0, };   //0~9���� �� ī������ ���� �迭
    cin >> a >> b >> c;
    gop = a * b * c;

    string s = to_string(gop);  //�ڷ��� ��ȯ

    for (int i = 0;i < s.length();i++) {   //s�� �ڸ��� ���ϴ� s.length()
        cnt[s[i] - '0']++;           //s[i]�� ���ڰ� ������ ������ �ƽ�Ű �ڵ�� ���´�
    }
    for (int i = 0;i < 10;i++) {
        cout << cnt[i] << endl;
    }
    return 0;
}