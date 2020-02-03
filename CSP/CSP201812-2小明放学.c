//
// Created by 隔壁王叔叔 on 2019/12/10.
//


#include <stdio.h>

int main() {
    int r, y, g, n;
    int x, z;
    long long l = 0, tmp;
    int i;

    scanf("%d%d%d%d", &r, &y, &g, &n);
    for(i = 0; i < n; i++){
        scanf("%d%d", &x, &z);
        tmp = l % (r + y + g);
        if(x == 0){
            l = l + z;
        } else if(x == 1){
            if(tmp <= z){
                l = l + z - tmp;
            } else if(tmp > z){
                if(tmp > z + g){
                    l = l + g + y + r - tmp;
                }
            }
        } else if(x == 2){
            if(tmp <= z + r){
                l = l + z + r - tmp;
            } else if(tmp > z + r){
                if(tmp > z + r + g){
                    l = l + g + y + r - tmp;
                }
            }
        } else if(x == 3){
            if(tmp > z){
                if(tmp < z + y + r){
                    l = l + z + y + r - tmp;
                }
            }
        }
    }

    printf("%d\n", l);
    return 0;
}

///下面是一种满分解法
/***
#include <stdio.h>

int main(void)
{
    int r, y, g, n, k, t;
    long long ans = 0, tmp;
    scanf("%d%d%d%d", &r, &y, &g, &n);
    while(n--) {
        scanf("%d%d", &k, &t);

        if(k != 0) {
            if(k == 1)
                tmp = ans + (r - t);
            else if(k == 2)
                tmp = ans + r + g +y - t;
            else if(k == 3)
                tmp = ans + r + g - t;
            tmp %= r + g + y;

            if(tmp >= r + g)
                t = r + g + y + r - tmp;
            else if(tmp <= r)
                t = r - tmp;
            else
                t = 0;
        }
        ans += t;
    }

    printf("%lld", ans);

    return 0;
}
***/