//
// Created by 隔壁王叔叔 on 2019/12/10.
//

#include <stdio.h>

int judge(char s[]) {
    int a[4];
    char op[3];
    int i,j;
    for (i = 0; i < 4; i++) {
        a[i] = s[i * 2] - '0';  //这一段代码就是将一个字符串转换成数字🌟
    }
    for (i = 0; i < 3; i++) {
        op[i] = s[i * 2 + 1];
    }

    int k = 3;  //用来标记计算次数
    for (i = 0; i < k; i++) {
        if (op[i] == 'x' || op[i] == '/') {
            if (op[i] == 'x') {
                a[i] = a[i] * a[i + 1];
            } else {
                a[i] = a[i] / a[i + 1];
            }
            k--;
            for (j = i; j < k; j++) {
                a[j + 1] = a[j + 2];
                op[i] = op[i + 1];
            }
            i--;    //因为后面的已经被移位了，所以要往前一位 才能继续运算
        }
    }

    int ans = a[0];
    for (i = 0; i < k; i++)
        if (op[i] == '+') {
            ans = a[i] + a[i + 1];
            a[i + 1] = ans;
        } else {
            ans = a[i] - a[i + 1];
            a[i + 1] = ans;
        }

    return ans == 24;
}

int main(){
    int n;
    char s[7 + 1];
    scanf("%d", &n);
    while(n--) {
        scanf("%s", s);
        printf(judge(s) ? "Yes\n" : "No\n");
    }

    return 0;
}
