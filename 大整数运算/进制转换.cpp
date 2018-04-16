#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int char2int(char c){
    if(c >='0' && c <= '9'){
        return c - '0';
    }else{
        return c - 'A' + 10;
    }
}
char int2char(int i){
    if(i >= 0 && i <= 9){
        return '0' + i;
    }else{
        return 'a' + i - 10;
    }
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

int main(){
    int m = 0,n = 0;
    char str1[1005],str2[1005];
    while(cin >> m >> n){
        cin >> str1;
        m2n(str1,str2,m,n);
        cout << str2 << endl;
    }
    return 0;
}
