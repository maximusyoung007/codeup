#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int compare(string s1,string s2)
{
    int result = 0;
    int len1 = s1.size();
    int len2 = s2.size();
    if(len1 > len2){
        result = 1;
    }
    else if(len1 < len2){
        result = 2;
    }
    else if(len1 == len2){
        for(int i = 0;i < len1;i++){
           if(s1.substr(i,1) > s2.substr(i,1)){
                result = 1;
                break;
           }
           else if(s1.substr(i,1) < s2.substr(i,1)){
                result = 2;
                break;
           }
        }
    }
    return result;
}
int main()
{
    int n;
    while(cin >> n){
        int k = 0;
        string str[110];
        for(int i = 0;i < n;i++){
            string s;
            cin >> s;
            str[k++] = s;
        }
        for(int i = 1;i <= k - 1;i++){
            for(int j = 0;j < n - i;j++){
                if(compare(str[j],str[j+1]) == 1){
                    string temp = str[j];
                    str[j] = str[j+1];
                    str[j+1] = temp;
                }
            }
        }
        for(int i = 0;i < k;i++){
            cout << str[i] << endl;
        }
    }
}
