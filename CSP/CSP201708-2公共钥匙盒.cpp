//
// Created by 隔壁王叔叔 on 2019/12/12.
//

#include <iostream>
#include <queue>

using namespace std;

struct _node {
    int num;    // 钥匙号
    char op;    // 操作：'G'-取钥匙，'R'-还钥匙
    int time;    // 时间点
    bool operator <(_node a)const
    {
        if(time != a.time)
            return time > a.time;
        else if(op != a.op)
            return op < a.op;
        else
            return num > a.num;
    }
};


int main(){

}