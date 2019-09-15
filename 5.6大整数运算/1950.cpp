#include<iostream>
#include<string>
#include<string.h>
using namespace std;
//思路：https://blog.csdn.net/Jaster_wisdom/article/details/52107785
//三言两语说不清楚
int result[1100];
//判断一个字符数组是否每一位都是0
void m2n(char str[],int m,int n)
{
    int shang[1100];
    int flag = 1;
    char result[1100];
    int k = 0;
    while(flag == 1){
        int temp = 0;
        for(int i = 0;i < strlen(str);i++){
            int s;
            if(str[i] >= '0' && str[i] <= '9'){
                s = str[i] - '0';
            }
            else if(str[i] >= 'A' && str[i] <= 'Z'){
                s = str[i] - 'A' + 10;
            }
            int factor = temp * m + s;
            temp = factor % n;
            int t = factor / n;
            if(t >= 0 && t <= 9)
                str[i] = t + '0';
            else if(t >= 10){
                str[i] = t - 10 + 'A';
            }
        }
        if(temp <= 9)
            result[k++] = temp + '0';
        else
            result[k++] = temp + 'a' - 10;
        int j;
        for(j = 0;j < strlen(str);j++){
            if(str[j] != '0'){
                flag = 1;
                break;
            }
        }
        if(j == strlen(str))
            flag = 0;
    }
    for(int i = k - 1;i >= 0;i--){
        cout << result[i];
    }
}
int main()
{
    int m,n;
    while(cin >> m >> n){
        char s[1100];
        cin >> s;
        m2n(s,m,n);
        cout << endl;
    }
    return 0;
}
