//
// Created by 隔壁王叔叔 on 2019/12/10.
//

#include <stdio.h>

#define N 100000
int a[N];

int main(){
    int n,i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int mina = a[0], maxa = a[n - 1];
    if(mina > maxa){
        int temp = maxa;
        maxa = mina;
        mina = temp;
    }

    if(n % 2 == 1){
        printf("%d %d %d", maxa, a[n / 2], mina);
    } else{
        if((a[n / 2 - 1] + a[n / 2]) % 2 == 1)
            printf("%d %.1lf %d", maxa, (double)((a[n / 2 - 1] + a[n / 2]) / 2.0), mina);
        else
            printf("%d %d %d", maxa, (a[n / 2 - 1] + a[n / 2]) / 2, mina);
    }

    return 0;
}