//
// Created by 隔壁王叔叔 on 2019/12/8.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b){
    return b < a;
}

int main(){
    vector<int> vi;
    vi.push_back(4);
    vi.push_back(7);
    vi.push_back(23);
    vi.push_back(1);

    sort(vi.begin(), vi.end(), cmp);
    for(int i = 0; i < 4; i++){
        printf("%d\n", vi[i]);
    }

    return 0;
}