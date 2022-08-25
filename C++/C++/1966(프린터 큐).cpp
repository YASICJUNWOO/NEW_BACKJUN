#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

//우선순위들을 담을 PAIR QUEUE
queue<pair<int, int>> q;

//최대 우선순위 큐가 나올때까지 큐를 순환시키는 하ㅏㅁ수
int delt_idx(int p) {

    //우선순위 p가 나올때까지 q안에 있는 우선순위를 뒤로 보낸다
    while (q.front().first != p) {
        q.push(q.front());
        q.pop();
    }

    //우선순위 p와 같은 q원소의 2번째 인자 반환
    return q.front().second;
}

int main() {
    int test;
    cin >> test;

   

    int total, index;
    int rank;
    while (test--) {
        vector<int> rank_list;
        int cnt = 1;
        cin >> total >> index;

        /*우선순위를 받아 rank_list에 저장
        q에는 우선순위와 index를 pair로 묶어 저장한다(같은 우선순위에서의 비교 위해)*/
        for (int i = 0;i < total;i++) {
            cin >> rank;
            rank_list.push_back(rank);
            q.push(pair<int, int>(rank, i));
        }

        //우선순위들을 내림차순으로 탐색하기 위한 rank_list를 정렬
        sort(rank_list.begin(), rank_list.end(), greater<int>());

        for (int i = 0;i < rank_list.size();i++) {
            int idx = delt_idx(rank_list[i]);

           
            /*우선순위가 rank_list[i]와 같은 q의 원소가
            index까지 같으면 우리가 찾는 원소이다*/
            if (idx == index) {
                cout << cnt<<'\n';
                break;
            }

            //아니라면 q의 원소를 pop하고 수행횟수 cnt 증가
            q.pop();
            cnt++;
        }

        //큐 초기화
        q = queue<pair<int, int>>();
    }

}