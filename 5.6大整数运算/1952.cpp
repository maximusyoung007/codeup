#include<iostream>
#include<string.h>
using namespace std;
char two[1100],result[1100],ten[1100];
void m2n(char str[],int m,int n,char result[])
{
    int shang[1100];
    int flag = 1;
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
    /*for(int i = k - 1;i >= 0;i--){
        cout << result[i];
    }*/
}
int main()
{
    while(cin >> ten){
        m2n(ten,10,2,two);
        m2n(two,2,10,result);
        for(int i = strlen(result) - 1;i >= 0;i--){
            cout << result[i];
        }
        cout << endl;
        memset(two,0,sizeof(two));
        memset(result,0,sizeof(result));
        memset(ten,0,sizeof(ten));
    }
    return 0;
}
