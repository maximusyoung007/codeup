#include<cstdio>
#include<string.h>
//注意点：考虑0的情况
int main()
{
    int a,b;
    char n[100];
    while(scanf("%d %s %d",&a,&n,&b) != EOF){
        int factor = 1;
        int len = strlen(n);
        long long result = 0;
        for(int i = len - 1;i >= 0;i--){
            int temp;
            if(n[i] >= 'a' && n[i] <= 'z'){
                temp = n[i] - 'a' + 10;
            }
            else if(n[i] >= 'A' && n[i] <= 'Z'){
                temp = n[i] - 'A' + 10;
            }
            else if(n[i] >= '0' && n[i] <= '9'){
                temp = n[i] - '0';
            }
            result += temp * factor;
            factor *= a;
        }
        //printf("%d\n",result);
        int factor2 = 1;
        char final_result[100];
        int j = 0;
        if(result == 0){
            printf("0\n");
        }
        else{
            while(result){
                int temp_result = result % b;
                if(temp_result <= 9 && temp_result >=0){
                    final_result[j++] = temp_result + '0';
                }
                else{
                    final_result[j++] = temp_result - 10 + 'A';
                }
                result = result / b;
            }
            j -= 1;
            while(j >= 0){
                printf("%c",final_result[j]);
                j--;
            }
            printf("\n");
        }
    }
}
