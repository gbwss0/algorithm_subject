//
// Created by 隔壁王叔叔 on 2019/12/12.
//

#include <iostream>
#include <map>
#include <queue>
using namespace std;

struct Node{
    int num, count;
    bool operator < (const Node& a) const{
        if(count == a.count)
            return num > a.num;
        else
            return count < a.count;
    }
};

int main(){
    priority_queue<Node> q;
    map<int, int> m;
    int n, v;

    cin >> n;
    while (n--){
        cin >> v;
        m[v]++;
    }

    Node an;
    for(map<int, int>::iterator it = m.begin(); it != m.end(); it++){
        an.num = it->first;
        an.count = it->second;
        q.push(an);
    }

    while (!q.empty()){
        an = q.top();
        q.pop();
        cout << an.num << " " << an.count << endl;
    }

    return 0;
}