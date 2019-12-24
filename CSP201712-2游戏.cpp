//
// Created by 隔壁王叔叔 on 2019/12/12.
//

#include <iostream>
#include <queue>
#include <stdio.h>

using namespace std;

int main(){
    queue<int> q;
    int n, k, i;
    cin >> n >> k;
    for(i = 1; i < n + 1; i++){
        q.push(i);
    }
    int no = 0, head;
    while(!q.empty()){
        no++;
        head = q.front();
        q.pop();

        if(no % k == 0 || no % 10 == k)
            ;
        else
            q.push(head);
    }
    cout << head;
    return 0;
}
