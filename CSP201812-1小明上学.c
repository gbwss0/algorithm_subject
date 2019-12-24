//
// Created by 隔壁王叔叔 on 2019/12/10.
//

#include <stdio.h>

int main(){
    int r, y, g, n, l = 0;
    int x, z;
    scanf("%d%d%d%d", &r, &y, &g, &n);
    for(int i = 0; i < n; i++){
        scanf("%d%d", &x, &y);
        if(x == 0 || x == 1){
            l = l + y;
        }
        else if(x == 2){
            l = l + y + r;
        }
    }
    printf("%d\n", l);
    return 0;
}