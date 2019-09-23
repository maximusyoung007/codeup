#include<cstdio>
#include<map>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i = 0;i < s.length();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
    map<string,int> s_map;
    int j = 0;//j表示第二次从几开始循环
    while(j < s.length()){
        int i;
        string temp = "";
        for(i = j;i < s.length();i++){
            if((s[i] <= '9' && s[i] >= '0') || (s[i] >= 'a' && s[i] <= 'z'))
            {
                temp += s[i];
            }
            else{
                i++;
                break;
            }
        }
        j = i;
        if(temp != "" && s_map[temp] > 0){
            s_map[temp] += 1;
        }
        else if(temp != "")
            s_map[temp] = 1;
    }
    string max_first = "";
    int max_second = 0;
    map<string,int>:: iterator it = s_map.begin();
    for(;it != s_map.end();it++){
        if(it -> second > max_second){
            max_first = it -> first;
            max_second = it -> second;
        }
    }
    cout << max_first << " "<< max_second << endl;
    return 0;
}
