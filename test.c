//
// Created by 隔壁王叔叔 on 2019/12/12.
//


#include <stdio.h>

#define N 3

int main(void)
{
    int n, m, i, j;

    scanf("%d", &n);
    while(n--) {
        scanf("%d", &m);

        for(i=1; i<=m*N; i++) {
            for(j=1; j<=m; j++)
                printf("HDU");
            printf("\n");
        }
    }

    return 0;
}