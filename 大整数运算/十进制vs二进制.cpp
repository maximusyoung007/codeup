#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int char2int(char c){
    return c - '0';
}
char int2char(int i){
    return i + '0';
}
void m2n(char str1[],char str2[],int m,int n)
{
    int data[1005],j = 0;
    for(int i = 0; i < strlen(str1); i++)
        data[i] = char2int(str1[i]);
    while(1){
        unsigned int i = 0;
        while(data[i] == 0 && i < strlen(str1)) i++;
        if(i == strlen(str1)) break;
        int yu = 0,tmp = 0;
        for(; i < strlen(str1);i++){
            tmp = yu * m + data[i];
            yu = tmp % n;
            data[i] = tmp / n;
        }
        str2[j++] = int2char(yu);
    }
    str2[j] = '\0';
    reverse(str2,str2 + strlen(str2));
}
int main()
{
    char str1[2000];
    while(cin >> str1){
        char str2[2000],str3[2000];
        m2n(str1,str2,10,2);
        reverse(str2,str2 + strlen(str2));
        m2n(str2,str3,2,10);
        cout << str3 << endl;
    }
    return 0;
}
