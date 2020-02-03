//
// Created by 隔壁王叔叔 on 2019/12/13.
//

#include <stdio.h>

int main(){
    int N, ans;
    scanf("%d", &N);
    ans =(N / 50) * 7 + ((N % 50) / 30) * 4 + ((N % 50) % 30) / 10 ;
    printf("%d\n",ans);
    return 0;
}
//