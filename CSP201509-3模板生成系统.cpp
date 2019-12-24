//
// Created by 隔壁王叔叔 on 2019/12/13.
//
//
/***
这道题的反思：
 1.句子中用getline的时候不要忘了，前面还有一个换行符，直接用的话会读到一个空数据，可以使用getchar解决
 2.这道题中涉及到一行中多次替换，标准答案中使用了在for中又加了个for(;;)来达到循环整行的目的
 3.map中的count方法很好用，结合条件运算符更好用
***/



#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> v;
    map<string, string> dict;
    string key, temp, value;
    int n, m, prew, next;

    cin >> n >> m;
    getchar();
    for(int i = 0; i < n; i++){
        getline(cin, temp);
        v.push_back(temp);
    }
    for(int i = 0; i < m; i++){
        cin >> key;
        getline(cin, value);
        dict[key] = value.substr(2, value.length() - 3);
    }

    for(int i = 0; i < n; i++){
        prew = 0;
        if((  = v[i].find("{{", prew)) != (int)string::npos){
            key = v[i].substr(prew + 3, next - prew -4);
            v[i].replace(prew, next - prew + 2, dict.count(key) ? dict[key] : "");
            prew += dict.count(key) ? dict[key].length() : 0;
        }

        cout << v[i] << endl;

    }
    return 0;

}