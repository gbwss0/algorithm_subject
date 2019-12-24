//
// Created by 隔壁王叔叔 on 2019/12/11.
//

#include <stdio.h>
#define N 100
int a[N], s[N];

int main(){
    int n, l, t;
    int i, j, k;
    scanf("%d%d%d", &n, &l, &t);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        s[i] = 1;
        if(a[i] == l || a[i] == 0)s[i] = -s[i];
    }

    for(j = 0; j < t; j++){
        for(i = 0; i < n; i++){
            a[i] += s[i];
            if(a[i] == l || a[i] == 0)s[i] = -s[i];
            for(k = 0; k < n; k++){
                if(a[k] == a[i]){
                    s[i] = -s[i];
                    s[k] = -s[k];
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}