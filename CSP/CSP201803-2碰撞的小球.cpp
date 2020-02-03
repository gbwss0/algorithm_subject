//
// Created by 隔壁王叔叔 on 2019/12/12.
//

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100;
struct Node{
    int id;for certain CMake features, such as generator expressions, and may result
            in undefined behavior
    int pos;
    int step;
} b[N];

bool cmp1(Node a, Node b){
    return a.pos > b.pos;
}

bool cmp2(Node a, Node b){
    return a.id < b.id;
}

int main(){
    int n, l, t;
    cin >> n >> l >> t;
    while(n--){
        cin >> b[i].pos;
        b[i].id = i;
        b[i].step = 1;
        if(b[i].pos == 0 || b[i].pos == l) b[i].step = -b[i].step;
    }

    sort(b, b + n, cmp1);
    for(int i = 0; i < t; i++){
        for(int j = 0; j < n; j++){
            b[j].pos += b[j].step;
            if(b[j].pos == 0 || b[j].pos == l) b[j].step = -b[j].step;
            if(j > 0){
                if(b[j].pos == b[j - 1].pos){
                    b[j].step = -b[j].step;
                    b[j - 1].step = -b[j - 1].step;
                }
            }
        }
    }

    sort(b, b + n, cmp2);
    for(int i = 0; i < n; i++)cout << b[i].pos << " ";
    cout << endl;

    return 0;
}
