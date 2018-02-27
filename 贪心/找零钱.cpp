//something wrong in logic,only can work at the first time
#include<cstdio>
int main()
{
    int n;
    int price[5] = {50,20,10,5,1};
    while(scanf("%d",&n) != EOF){
            int counti = 0;
            int countn[5] = {0,0,0,0,0};
        while(n >= 50){
            n -= 50;
            countn[0]++;
        }
        while(n < 50 && n >= 20){
            n -= 20;
            countn[1]++;
        }
        while(n < 20 && n >= 10){
            n -= 10;
            countn[2]++;
        }
        while(n < 10 && n >=5){
            n -= 5;
            countn[3]++;
        }
        while(n < 5 && n >= 1){
            n -= 1;
            countn[4]++;
        }
        for(int i = 0;i < 5;i++){
            if(countn[i] != 0){
                counti += 1;
            }
        }
        for(int i = 0;i < 5;i++){
            if(countn[i] != 0){
                printf("%d*%d",price[i],countn[i]);
                if(counti > 1){
                    printf("+");
                    counti--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
