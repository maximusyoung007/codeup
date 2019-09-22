#include<stdio.h>
//https://blog.csdn.net/kayle1995/article/details/91632827
int main()
{
    char str1[50],str2[50];
    long long s,s1,s2,ans;
    int i,a1,a2,a,b,c,w,flag;
    while(scanf("%s %s",str1,str2)!=EOF){
        s1 = s2 = flag = b = c = a1 = 0;
        for(i = 0;str1[i];i++){
            if(str1[i] == '-')
                flag = 1;
            else if(str1[i] == '.')
                c = 1;
            else if(str1[i] == 'e' || str1[i] == 'E'){
                sscanf(str1 + i + 1,"%d",&b);
                a1 += b;
                break;
            }
            else{
                s1 = s1 * 10 + str1[i] - '0';
                a1 -= c;
            }
        }
        if(flag) s1 =- s1;
        flag = b = c = a2 = 0;
        for(i = 0;str2[i];i++){
            if(str2[i] == '-')
                flag = 1;
            else if(str2[i] == '.')
                c = 1;
            else if(str2[i] == 'e' || str2[i] == 'E'){
                sscanf(str2 + i + 1,"%d",&b);
                a2 += b;
                break;
            }
            else{
                s2 = s2 * 10 + str2[i] - '0';
                a2 -= c;
            }
        }
        if(flag) s2 =- s2;
        if(a1 < a2)
            for(;a1 < a2;a2--)
                s2 *= 10;
        else if(a1 > a2)
            for(;a1 > a2;a1--)
                s1 *= 10;
        a = a1;s = s1 + s2;
        if(!s){
            printf("0\n");
            continue;
        }
        while(a < 0 && s % 10 == 0){
            s /= 10;
            a++;
        }
        if(a >= 0){
            printf("%lld",s);
            for(i = 0;i < a;i++)
                printf("0");
            printf("\n");
            continue;
        }
        flag = 0;
        if(s < 0){
            s =- s;
            flag = 1;
        }
        ans = 1;w = 0;
        while(ans <= s){
            ans *= 10;
            w++;
        }
        if(ans > 1){
            ans /= 10;
			w--;
        }
        if(flag)
            printf("-");
        printf("%lld",s / ans);
        if(ans > 1)
            printf(".%lld",s % ans);
        printf("e%d\n",a + w);
    }
    return 0;
}

